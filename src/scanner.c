#include <assert.h>
#include <string.h>
#include <stdio.h>

#include <tree_sitter/parser.h>

/* Beancount syntax allows for only two meaningful indentation levels. */
#define LEVELS 8

enum TokenType {
  INDENT,
  DEDENT,
  NEWLINE,
  HEADER,
};

typedef struct {
  int level;
  int indent[LEVELS + 1];
} Scanner;

void* tree_sitter_beancount_external_scanner_create() {
  Scanner *scanner = malloc(sizeof(Scanner));
  scanner->level = 0;
  scanner->indent[0] = 0;
  return scanner;
}

bool tree_sitter_beancount_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = payload;
  bool eol = false;
  int indent = 0;

  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->lookahead == 0) {
      eol = true;
      indent = 0;
      break;
    } else if (lexer->lookahead == '\n') {
      eol = true;
      indent = 0;
      lexer->advance(lexer, true);
    } else if (lexer->lookahead == ' ') {
      indent += 1;
      lexer->advance(lexer, true);
    } else if (lexer->lookahead == '\t') {
      indent += 8;
      lexer->advance(lexer, true);
    } else if (lexer->lookahead == '\r') {
      indent = 0;
      lexer->advance(lexer, true);
    } else {
      break;
    }
  }

  if (valid_symbols[HEADER] && scanner->level == 0 && indent == 0) {
    if (lexer->lookahead == '*') {
      while (lexer->lookahead != '\n' && lexer->lookahead != 0)
        lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      lexer->result_symbol = HEADER;
      return true;
    }
  }

  if (eol) {
    if (valid_symbols[INDENT] && indent > scanner->indent[scanner->level]) {
      scanner->level += 1;
      if (scanner->level > LEVELS)
        scanner->level = LEVELS;
      scanner->indent[scanner->level] = indent;
      lexer->result_symbol = INDENT;
      return true;
    }

    if ((valid_symbols[DEDENT] || !valid_symbols[NEWLINE]) && indent < scanner->indent[scanner->level]) {
      scanner->level -= 1;
      if (scanner->level < 0)
        scanner->level = 0;
      lexer->result_symbol = DEDENT;
      return true;
    }

    if (valid_symbols[NEWLINE]) {
      lexer->result_symbol = NEWLINE;
      return true;
    }
  }

  return false;
}

unsigned tree_sitter_beancount_external_scanner_serialize(void *payload, char *buffer) {
  memcpy(buffer, payload, sizeof(Scanner));
  return sizeof(Scanner);
}

void tree_sitter_beancount_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  if (length > 0) {
    assert(length == sizeof(Scanner));
    memcpy(payload, buffer, length);
  }
}

void tree_sitter_beancount_external_scanner_destroy(void *payload) {
  free(payload);
}
