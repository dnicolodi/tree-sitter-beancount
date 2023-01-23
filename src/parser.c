#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 355
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 7
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 11

enum {
  sym_keyword = 1,
  anon_sym_pushtag = 2,
  anon_sym_poptag = 3,
  anon_sym_pushmeta = 4,
  anon_sym_COLON = 5,
  anon_sym_popmeta = 6,
  anon_sym_option = 7,
  anon_sym_include = 8,
  anon_sym_plugin = 9,
  anon_sym_txn = 10,
  anon_sym_AT = 11,
  anon_sym_AT_AT = 12,
  anon_sym_balance = 13,
  anon_sym_TILDE = 14,
  anon_sym_open = 15,
  anon_sym_COMMA = 16,
  anon_sym_close = 17,
  anon_sym_commodity = 18,
  anon_sym_pad = 19,
  anon_sym_document = 20,
  anon_sym_note = 21,
  anon_sym_event = 22,
  anon_sym_query = 23,
  anon_sym_custom = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_STAR = 27,
  anon_sym_SLASH = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_POUND = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  anon_sym_LBRACE_LBRACE = 34,
  anon_sym_RBRACE_RBRACE = 35,
  sym_comment = 36,
  aux_sym_flag_token1 = 37,
  aux_sym_flag_token2 = 38,
  sym_date = 39,
  anon_sym_TRUE = 40,
  anon_sym_FALSE = 41,
  sym_none = 42,
  aux_sym_currency_token1 = 43,
  aux_sym_currency_token2 = 44,
  sym__accounttype = 45,
  sym__accountname = 46,
  sym_string = 47,
  sym_number = 48,
  sym_tag = 49,
  sym_link = 50,
  sym_key = 51,
  sym__indent = 52,
  sym__dedent = 53,
  sym__newline = 54,
  sym__header = 55,
  sym_ledger = 56,
  sym__declarations = 57,
  sym__pragma = 58,
  sym_pushtag = 59,
  sym_poptag = 60,
  sym_pushmeta = 61,
  sym_popmeta = 62,
  sym_option = 63,
  sym_include = 64,
  sym_plugin = 65,
  sym__directive = 66,
  sym_transaction = 67,
  sym_price = 68,
  sym_balance = 69,
  sym_open = 70,
  sym_close = 71,
  sym_commodity = 72,
  sym_pad = 73,
  sym_document = 74,
  sym_note = 75,
  sym_event = 76,
  sym_query = 77,
  sym_custom = 78,
  sym__metadata = 79,
  sym_meta = 80,
  sym__simple_value = 81,
  sym_value = 82,
  aux_sym__tags_links = 83,
  sym__expr = 84,
  sym_posting = 85,
  sym__compound_amount = 86,
  sym__cost = 87,
  sym_cost = 88,
  sym_amount = 89,
  sym_header = 90,
  sym_flag = 91,
  sym_bool = 92,
  sym_currency = 93,
  sym_account = 94,
  aux_sym_ledger_repeat1 = 95,
  aux_sym_transaction_repeat1 = 96,
  aux_sym_transaction_repeat2 = 97,
  aux_sym_open_repeat1 = 98,
  aux_sym_custom_repeat1 = 99,
  aux_sym_posting_repeat1 = 100,
  aux_sym__cost_repeat1 = 101,
  aux_sym_account_repeat1 = 102,
  alias_sym_booking = 103,
  alias_sym_bql = 104,
  alias_sym_filename = 105,
  alias_sym_merge = 106,
  alias_sym_name = 107,
  alias_sym_narration = 108,
  alias_sym_payee = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_pushmeta] = "pushmeta",
  [anon_sym_COLON] = ":",
  [anon_sym_popmeta] = "popmeta",
  [anon_sym_option] = "option",
  [anon_sym_include] = "include",
  [anon_sym_plugin] = "plugin",
  [anon_sym_txn] = "txn",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_balance] = "balance",
  [anon_sym_TILDE] = "~",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_pad] = "pad",
  [anon_sym_document] = "document",
  [anon_sym_note] = "note",
  [anon_sym_event] = "event",
  [anon_sym_query] = "query",
  [anon_sym_custom] = "custom",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_comment] = "comment",
  [aux_sym_flag_token1] = "flag_token1",
  [aux_sym_flag_token2] = "flag_token2",
  [sym_date] = "date",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_none] = "none",
  [aux_sym_currency_token1] = "currency_token1",
  [aux_sym_currency_token2] = "currency_token2",
  [sym__accounttype] = "_accounttype",
  [sym__accountname] = "_accountname",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [sym_key] = "key",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym__header] = "_header",
  [sym_ledger] = "ledger",
  [sym__declarations] = "_declarations",
  [sym__pragma] = "_pragma",
  [sym_pushtag] = "pushtag",
  [sym_poptag] = "poptag",
  [sym_pushmeta] = "pushmeta",
  [sym_popmeta] = "popmeta",
  [sym_option] = "option",
  [sym_include] = "include",
  [sym_plugin] = "plugin",
  [sym__directive] = "_directive",
  [sym_transaction] = "transaction",
  [sym_price] = "price",
  [sym_balance] = "balance",
  [sym_open] = "open",
  [sym_close] = "close",
  [sym_commodity] = "commodity",
  [sym_pad] = "pad",
  [sym_document] = "document",
  [sym_note] = "note",
  [sym_event] = "event",
  [sym_query] = "query",
  [sym_custom] = "custom",
  [sym__metadata] = "_metadata",
  [sym_meta] = "meta",
  [sym__simple_value] = "_simple_value",
  [sym_value] = "value",
  [aux_sym__tags_links] = "_tags_links",
  [sym__expr] = "_expr",
  [sym_posting] = "posting",
  [sym__compound_amount] = "_compound_amount",
  [sym__cost] = "_cost",
  [sym_cost] = "cost",
  [sym_amount] = "amount",
  [sym_header] = "header",
  [sym_flag] = "flag",
  [sym_bool] = "bool",
  [sym_currency] = "currency",
  [sym_account] = "account",
  [aux_sym_ledger_repeat1] = "ledger_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_transaction_repeat2] = "transaction_repeat2",
  [aux_sym_open_repeat1] = "open_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [aux_sym_posting_repeat1] = "posting_repeat1",
  [aux_sym__cost_repeat1] = "_cost_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
  [alias_sym_booking] = "booking",
  [alias_sym_bql] = "bql",
  [alias_sym_filename] = "filename",
  [alias_sym_merge] = "merge",
  [alias_sym_name] = "name",
  [alias_sym_narration] = "narration",
  [alias_sym_payee] = "payee",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_plugin] = anon_sym_plugin,
  [anon_sym_txn] = anon_sym_txn,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_comment] = sym_comment,
  [aux_sym_flag_token1] = aux_sym_flag_token1,
  [aux_sym_flag_token2] = aux_sym_flag_token2,
  [sym_date] = sym_date,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_none] = sym_none,
  [aux_sym_currency_token1] = aux_sym_currency_token1,
  [aux_sym_currency_token2] = aux_sym_currency_token2,
  [sym__accounttype] = sym__accounttype,
  [sym__accountname] = sym__accountname,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [sym_key] = sym_key,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym__header] = sym__header,
  [sym_ledger] = sym_ledger,
  [sym__declarations] = sym__declarations,
  [sym__pragma] = sym__pragma,
  [sym_pushtag] = sym_pushtag,
  [sym_poptag] = sym_poptag,
  [sym_pushmeta] = sym_pushmeta,
  [sym_popmeta] = sym_popmeta,
  [sym_option] = sym_option,
  [sym_include] = sym_include,
  [sym_plugin] = sym_plugin,
  [sym__directive] = sym__directive,
  [sym_transaction] = sym_transaction,
  [sym_price] = sym_price,
  [sym_balance] = sym_balance,
  [sym_open] = sym_open,
  [sym_close] = sym_close,
  [sym_commodity] = sym_commodity,
  [sym_pad] = sym_pad,
  [sym_document] = sym_document,
  [sym_note] = sym_note,
  [sym_event] = sym_event,
  [sym_query] = sym_query,
  [sym_custom] = sym_custom,
  [sym__metadata] = sym__metadata,
  [sym_meta] = sym_meta,
  [sym__simple_value] = sym__simple_value,
  [sym_value] = sym_value,
  [aux_sym__tags_links] = aux_sym__tags_links,
  [sym__expr] = sym__expr,
  [sym_posting] = sym_posting,
  [sym__compound_amount] = sym__compound_amount,
  [sym__cost] = sym__cost,
  [sym_cost] = sym_cost,
  [sym_amount] = sym_amount,
  [sym_header] = sym_header,
  [sym_flag] = sym_flag,
  [sym_bool] = sym_bool,
  [sym_currency] = sym_currency,
  [sym_account] = sym_account,
  [aux_sym_ledger_repeat1] = aux_sym_ledger_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_transaction_repeat2] = aux_sym_transaction_repeat2,
  [aux_sym_open_repeat1] = aux_sym_open_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [aux_sym_posting_repeat1] = aux_sym_posting_repeat1,
  [aux_sym__cost_repeat1] = aux_sym__cost_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [alias_sym_booking] = alias_sym_booking,
  [alias_sym_bql] = alias_sym_bql,
  [alias_sym_filename] = alias_sym_filename,
  [alias_sym_merge] = alias_sym_merge,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_narration] = alias_sym_narration,
  [alias_sym_payee] = alias_sym_payee,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flag_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_currency_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_currency_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__accounttype] = {
    .visible = false,
    .named = true,
  },
  [sym__accountname] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_ledger] = {
    .visible = true,
    .named = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym__pragma] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pushtag] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag] = {
    .visible = true,
    .named = true,
  },
  [sym_pushmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_popmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_balance] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym__metadata] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_value] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__tags_links] = {
    .visible = false,
    .named = false,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_amount] = {
    .visible = false,
    .named = true,
  },
  [sym__cost] = {
    .visible = false,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ledger_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_posting_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cost_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_booking] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bql] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_filename] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_merge] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_narration] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_payee] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_narration,
  },
  [2] = {
    [2] = alias_sym_payee,
    [3] = alias_sym_narration,
  },
  [3] = {
    [3] = alias_sym_booking,
  },
  [4] = {
    [3] = alias_sym_filename,
  },
  [5] = {
    [3] = sym_note,
  },
  [6] = {
    [2] = alias_sym_name,
    [3] = alias_sym_bql,
  },
  [7] = {
    [4] = alias_sym_booking,
  },
  [8] = {
    [0] = alias_sym_merge,
  },
  [9] = {
    [5] = alias_sym_booking,
  },
  [10] = {
    [1] = alias_sym_merge,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 15,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 23,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 23,
  [135] = 135,
  [136] = 136,
  [137] = 15,
  [138] = 138,
  [139] = 139,
  [140] = 97,
  [141] = 136,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 13,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 12,
  [153] = 153,
  [154] = 14,
  [155] = 11,
  [156] = 156,
  [157] = 157,
  [158] = 10,
  [159] = 13,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 19,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 11,
  [168] = 164,
  [169] = 13,
  [170] = 10,
  [171] = 12,
  [172] = 10,
  [173] = 11,
  [174] = 12,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 177,
  [183] = 183,
  [184] = 184,
  [185] = 12,
  [186] = 10,
  [187] = 183,
  [188] = 188,
  [189] = 11,
  [190] = 190,
  [191] = 188,
  [192] = 192,
  [193] = 13,
  [194] = 194,
  [195] = 195,
  [196] = 190,
  [197] = 197,
  [198] = 188,
  [199] = 199,
  [200] = 183,
  [201] = 188,
  [202] = 183,
  [203] = 194,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 194,
  [208] = 206,
  [209] = 194,
  [210] = 210,
  [211] = 206,
  [212] = 212,
  [213] = 183,
  [214] = 194,
  [215] = 188,
  [216] = 206,
  [217] = 206,
  [218] = 190,
  [219] = 190,
  [220] = 190,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 14,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 15,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 19,
  [283] = 283,
  [284] = 23,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 97,
  [301] = 21,
  [302] = 302,
  [303] = 302,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 302,
  [309] = 23,
  [310] = 302,
  [311] = 221,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 293,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 122,
  [331] = 331,
  [332] = 332,
  [333] = 21,
  [334] = 292,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 320,
  [340] = 332,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 320,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 320,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
};

static inline bool sym__accounttype_character_set_1(int32_t c) {
  return (c < 7406
    ? (c < 1248
      ? (c < 522
        ? (c < 366
          ? (c < 306
            ? (c < 276
              ? (c < 262
                ? (c < 216
                  ? (c < 186
                    ? c == 170
                    : (c <= 186 || (c >= 192 && c <= 214)))
                  : (c <= 222 || (c < 258
                    ? c == 256
                    : (c <= 258 || c == 260))))
                : (c <= 262 || (c < 270
                  ? (c < 266
                    ? c == 264
                    : (c <= 266 || c == 268))
                  : (c <= 270 || (c < 274
                    ? c == 272
                    : c <= 274)))))
              : (c <= 276 || (c < 292
                ? (c < 284
                  ? (c < 280
                    ? c == 278
                    : (c <= 280 || c == 282))
                  : (c <= 284 || (c < 288
                    ? c == 286
                    : (c <= 288 || c == 290))))
                : (c <= 292 || (c < 300
                  ? (c < 296
                    ? c == 294
                    : (c <= 296 || c == 298))
                  : (c <= 300 || (c < 304
                    ? c == 302
                    : c <= 304)))))))
            : (c <= 306 || (c < 338
              ? (c < 323
                ? (c < 315
                  ? (c < 310
                    ? c == 308
                    : (c <= 310 || c == 313))
                  : (c <= 315 || (c < 319
                    ? c == 317
                    : (c <= 319 || c == 321))))
                : (c <= 323 || (c < 332
                  ? (c < 327
                    ? c == 325
                    : (c <= 327 || c == 330))
                  : (c <= 332 || (c < 336
                    ? c == 334
                    : c <= 336)))))
              : (c <= 338 || (c < 352
                ? (c < 346
                  ? (c < 342
                    ? c == 340
                    : (c <= 342 || c == 344))
                  : (c <= 346 || (c < 350
                    ? c == 348
                    : c <= 350)))
                : (c <= 352 || (c < 360
                  ? (c < 356
                    ? c == 354
                    : (c <= 356 || c == 358))
                  : (c <= 360 || (c < 364
                    ? c == 362
                    : c <= 364)))))))))
          : (c <= 366 || (c < 458
            ? (c < 412
              ? (c < 385
                ? (c < 374
                  ? (c < 370
                    ? c == 368
                    : (c <= 370 || c == 372))
                  : (c <= 374 || (c < 379
                    ? (c >= 376 && c <= 377)
                    : (c <= 379 || c == 381))))
                : (c <= 386 || (c < 398
                  ? (c < 390
                    ? c == 388
                    : (c <= 391 || (c >= 393 && c <= 395)))
                  : (c <= 401 || (c < 406
                    ? (c >= 403 && c <= 404)
                    : c <= 408)))))
              : (c <= 413 || (c < 430
                ? (c < 422
                  ? (c < 418
                    ? (c >= 415 && c <= 416)
                    : (c <= 418 || c == 420))
                  : (c <= 423 || (c < 428
                    ? c == 425
                    : c <= 428)))
                : (c <= 431 || (c < 443
                  ? (c < 437
                    ? (c >= 433 && c <= 435)
                    : (c <= 437 || (c >= 439 && c <= 440)))
                  : (c <= 444 || (c < 455
                    ? (c >= 448 && c <= 452)
                    : c <= 455)))))))
            : (c <= 458 || (c < 490
              ? (c < 475
                ? (c < 467
                  ? (c < 463
                    ? c == 461
                    : (c <= 463 || c == 465))
                  : (c <= 467 || (c < 471
                    ? c == 469
                    : (c <= 471 || c == 473))))
                : (c <= 475 || (c < 484
                  ? (c < 480
                    ? c == 478
                    : (c <= 480 || c == 482))
                  : (c <= 484 || (c < 488
                    ? c == 486
                    : c <= 488)))))
              : (c <= 490 || (c < 508
                ? (c < 500
                  ? (c < 494
                    ? c == 492
                    : (c <= 494 || c == 497))
                  : (c <= 500 || (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)))
                : (c <= 508 || (c < 516
                  ? (c < 512
                    ? c == 510
                    : (c <= 512 || c == 514))
                  : (c <= 516 || (c < 520
                    ? c == 518
                    : c <= 520)))))))))))
        : (c <= 522 || (c < 1122
          ? (c < 880
            ? (c < 552
              ? (c < 538
                ? (c < 530
                  ? (c < 526
                    ? c == 524
                    : (c <= 526 || c == 528))
                  : (c <= 530 || (c < 534
                    ? c == 532
                    : (c <= 534 || c == 536))))
                : (c <= 538 || (c < 546
                  ? (c < 542
                    ? c == 540
                    : (c <= 542 || c == 544))
                  : (c <= 546 || (c < 550
                    ? c == 548
                    : c <= 550)))))
              : (c <= 552 || (c < 577
                ? (c < 560
                  ? (c < 556
                    ? c == 554
                    : (c <= 556 || c == 558))
                  : (c <= 560 || (c < 570
                    ? c == 562
                    : (c <= 571 || (c >= 573 && c <= 574)))))
                : (c <= 577 || (c < 588
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : (c <= 584 || c == 586))
                  : (c <= 588 || (c < 660
                    ? c == 590
                    : c <= 660)))))))
            : (c <= 880 || (c < 990
              ? (c < 913
                ? (c < 902
                  ? (c < 886
                    ? c == 882
                    : (c <= 886 || c == 895))
                  : (c <= 902 || (c < 908
                    ? (c >= 904 && c <= 906)
                    : (c <= 908 || (c >= 910 && c <= 911)))))
                : (c <= 929 || (c < 984
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : (c <= 975 || (c >= 978 && c <= 980)))
                  : (c <= 984 || (c < 988
                    ? c == 986
                    : c <= 988)))))
              : (c <= 990 || (c < 1004
                ? (c < 998
                  ? (c < 994
                    ? c == 992
                    : (c <= 994 || c == 996))
                  : (c <= 998 || (c < 1002
                    ? c == 1000
                    : c <= 1002)))
                : (c <= 1004 || (c < 1017
                  ? (c < 1012
                    ? c == 1006
                    : (c <= 1012 || c == 1015))
                  : (c <= 1018 || (c < 1120
                    ? (c >= 1021 && c <= 1071)
                    : c <= 1120)))))))))
          : (c <= 1122 || (c < 1188
            ? (c < 1152
              ? (c < 1138
                ? (c < 1130
                  ? (c < 1126
                    ? c == 1124
                    : (c <= 1126 || c == 1128))
                  : (c <= 1130 || (c < 1134
                    ? c == 1132
                    : (c <= 1134 || c == 1136))))
                : (c <= 1138 || (c < 1146
                  ? (c < 1142
                    ? c == 1140
                    : (c <= 1142 || c == 1144))
                  : (c <= 1146 || (c < 1150
                    ? c == 1148
                    : c <= 1150)))))
              : (c <= 1152 || (c < 1174
                ? (c < 1168
                  ? (c < 1164
                    ? c == 1162
                    : (c <= 1164 || c == 1166))
                  : (c <= 1168 || (c < 1172
                    ? c == 1170
                    : c <= 1172)))
                : (c <= 1174 || (c < 1182
                  ? (c < 1178
                    ? c == 1176
                    : (c <= 1178 || c == 1180))
                  : (c <= 1182 || (c < 1186
                    ? c == 1184
                    : c <= 1186)))))))
            : (c <= 1188 || (c < 1219
              ? (c < 1204
                ? (c < 1196
                  ? (c < 1192
                    ? c == 1190
                    : (c <= 1192 || c == 1194))
                  : (c <= 1196 || (c < 1200
                    ? c == 1198
                    : (c <= 1200 || c == 1202))))
                : (c <= 1204 || (c < 1212
                  ? (c < 1208
                    ? c == 1206
                    : (c <= 1208 || c == 1210))
                  : (c <= 1212 || (c < 1216
                    ? c == 1214
                    : c <= 1217)))))
              : (c <= 1219 || (c < 1234
                ? (c < 1227
                  ? (c < 1223
                    ? c == 1221
                    : (c <= 1223 || c == 1225))
                  : (c <= 1227 || (c < 1232
                    ? c == 1229
                    : c <= 1232)))
                : (c <= 1234 || (c < 1242
                  ? (c < 1238
                    ? c == 1236
                    : (c <= 1238 || c == 1240))
                  : (c <= 1242 || (c < 1246
                    ? c == 1244
                    : c <= 1246)))))))))))))
      : (c <= 1248 || (c < 2984
        ? (c < 2160
          ? (c < 1308
            ? (c < 1278
              ? (c < 1264
                ? (c < 1256
                  ? (c < 1252
                    ? c == 1250
                    : (c <= 1252 || c == 1254))
                  : (c <= 1256 || (c < 1260
                    ? c == 1258
                    : (c <= 1260 || c == 1262))))
                : (c <= 1264 || (c < 1272
                  ? (c < 1268
                    ? c == 1266
                    : (c <= 1268 || c == 1270))
                  : (c <= 1272 || (c < 1276
                    ? c == 1274
                    : c <= 1276)))))
              : (c <= 1278 || (c < 1294
                ? (c < 1286
                  ? (c < 1282
                    ? c == 1280
                    : (c <= 1282 || c == 1284))
                  : (c <= 1286 || (c < 1290
                    ? c == 1288
                    : (c <= 1290 || c == 1292))))
                : (c <= 1294 || (c < 1302
                  ? (c < 1298
                    ? c == 1296
                    : (c <= 1298 || c == 1300))
                  : (c <= 1302 || (c < 1306
                    ? c == 1304
                    : c <= 1306)))))))
            : (c <= 1308 || (c < 1646
              ? (c < 1324
                ? (c < 1316
                  ? (c < 1312
                    ? c == 1310
                    : (c <= 1312 || c == 1314))
                  : (c <= 1316 || (c < 1320
                    ? c == 1318
                    : (c <= 1320 || c == 1322))))
                : (c <= 1324 || (c < 1519
                  ? (c < 1329
                    ? c == 1326
                    : (c <= 1366 || (c >= 1488 && c <= 1514)))
                  : (c <= 1522 || (c < 1601
                    ? (c >= 1568 && c <= 1599)
                    : c <= 1610)))))
              : (c <= 1647 || (c < 1810
                ? (c < 1786
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : (c <= 1749 || (c >= 1774 && c <= 1775)))
                  : (c <= 1788 || (c < 1808
                    ? c == 1791
                    : c <= 1808)))
                : (c <= 1839 || (c < 2048
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : (c <= 1969 || (c >= 1994 && c <= 2026)))
                  : (c <= 2069 || (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)))))))))
          : (c <= 2183 || (c < 2674
            ? (c < 2510
              ? (c < 2437
                ? (c < 2365
                  ? (c < 2208
                    ? (c >= 2185 && c <= 2190)
                    : (c <= 2248 || (c >= 2308 && c <= 2361)))
                  : (c <= 2365 || (c < 2392
                    ? c == 2384
                    : (c <= 2401 || (c >= 2418 && c <= 2432)))))
                : (c <= 2444 || (c < 2482
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : (c <= 2472 || (c >= 2474 && c <= 2480)))
                  : (c <= 2482 || (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)))))
              : (c <= 2510 || (c < 2579
                ? (c < 2556
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : (c <= 2529 || (c >= 2544 && c <= 2545)))
                  : (c <= 2556 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2616
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : (c <= 2611 || (c >= 2613 && c <= 2614)))
                  : (c <= 2617 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))))))
            : (c <= 2676 || (c < 2866
              ? (c < 2768
                ? (c < 2730
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : (c <= 2705 || (c >= 2707 && c <= 2728)))
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : (c <= 2745 || c == 2749))))
                : (c <= 2768 || (c < 2831
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : (c <= 2809 || (c >= 2821 && c <= 2828)))
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2949
                ? (c < 2911
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : (c <= 2877 || (c >= 2908 && c <= 2909)))
                  : (c <= 2913 || (c < 2947
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2972
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : (c <= 2965 || (c >= 2969 && c <= 2970)))
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))))))))
        : (c <= 2986 || (c < 4238
          ? (c < 3482
            ? (c < 3242
              ? (c < 3160
                ? (c < 3086
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : (c <= 3024 || (c >= 3077 && c <= 3084)))
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : (c <= 3129 || c == 3133))))
                : (c <= 3162 || (c < 3205
                  ? (c < 3168
                    ? c == 3165
                    : (c <= 3169 || c == 3200))
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3346
                ? (c < 3296
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : (c <= 3261 || (c >= 3293 && c <= 3294)))
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : (c <= 3340 || (c >= 3342 && c <= 3344)))))
                : (c <= 3386 || (c < 3423
                  ? (c < 3406
                    ? c == 3389
                    : (c <= 3406 || (c >= 3412 && c <= 3414)))
                  : (c <= 3425 || (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)))))))
            : (c <= 3505 || (c < 3776
              ? (c < 3716
                ? (c < 3585
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : (c <= 3517 || (c >= 3520 && c <= 3526)))
                  : (c <= 3632 || (c < 3648
                    ? (c >= 3634 && c <= 3635)
                    : (c <= 3653 || (c >= 3713 && c <= 3714)))))
                : (c <= 3716 || (c < 3751
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : (c <= 3747 || c == 3749))
                  : (c <= 3760 || (c < 3773
                    ? (c >= 3762 && c <= 3763)
                    : c <= 3773)))))
              : (c <= 3780 || (c < 4159
                ? (c < 3913
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : (c <= 3840 || (c >= 3904 && c <= 3911)))
                  : (c <= 3948 || (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)))
                : (c <= 4159 || (c < 4197
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : (c <= 4189 || c == 4193))
                  : (c <= 4198 || (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)))))))))
          : (c <= 4238 || (c < 5952
            ? (c < 4802
              ? (c < 4698
                ? (c < 4352
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : (c <= 4295 || c == 4301))
                  : (c <= 4680 || (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : (c <= 4694 || c == 4696))))
                : (c <= 4701 || (c < 4786
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : (c <= 4749 || (c >= 4752 && c <= 4784)))
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))))
              : (c <= 4805 || (c < 5121
                ? (c < 4888
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : (c <= 4880 || (c >= 4882 && c <= 4885)))
                  : (c <= 4954 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5740 || (c < 5873
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : (c <= 5786 || (c >= 5792 && c <= 5866)))
                  : (c <= 5880 || (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)))))))
            : (c <= 5969 || (c < 6576
              ? (c < 6279
                ? (c < 6108
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : (c <= 6000 || (c >= 6016 && c <= 6067)))
                  : (c <= 6108 || (c < 6212
                    ? (c >= 6176 && c <= 6210)
                    : (c <= 6264 || (c >= 6272 && c <= 6276)))))
                : (c <= 6312 || (c < 6480
                  ? (c < 6320
                    ? c == 6314
                    : (c <= 6389 || (c >= 6400 && c <= 6430)))
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))))
              : (c <= 6601 || (c < 7098
                ? (c < 6981
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : (c <= 6740 || (c >= 6917 && c <= 6963)))
                  : (c <= 6988 || (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)))
                : (c <= 7141 || (c < 7312
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : (c <= 7247 || (c >= 7258 && c <= 7287)))
                  : (c <= 7354 || (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)))))))))))))))
    : (c <= 7411 || (c < 12543
      ? (c < 7916
        ? (c < 7792
          ? (c < 7734
            ? (c < 7704
              ? (c < 7690
                ? (c < 7682
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : (c <= 7418 || c == 7680))
                  : (c <= 7682 || (c < 7686
                    ? c == 7684
                    : (c <= 7686 || c == 7688))))
                : (c <= 7690 || (c < 7698
                  ? (c < 7694
                    ? c == 7692
                    : (c <= 7694 || c == 7696))
                  : (c <= 7698 || (c < 7702
                    ? c == 7700
                    : c <= 7702)))))
              : (c <= 7704 || (c < 7720
                ? (c < 7712
                  ? (c < 7708
                    ? c == 7706
                    : (c <= 7708 || c == 7710))
                  : (c <= 7712 || (c < 7716
                    ? c == 7714
                    : (c <= 7716 || c == 7718))))
                : (c <= 7720 || (c < 7728
                  ? (c < 7724
                    ? c == 7722
                    : (c <= 7724 || c == 7726))
                  : (c <= 7728 || (c < 7732
                    ? c == 7730
                    : c <= 7732)))))))
            : (c <= 7734 || (c < 7764
              ? (c < 7750
                ? (c < 7742
                  ? (c < 7738
                    ? c == 7736
                    : (c <= 7738 || c == 7740))
                  : (c <= 7742 || (c < 7746
                    ? c == 7744
                    : (c <= 7746 || c == 7748))))
                : (c <= 7750 || (c < 7758
                  ? (c < 7754
                    ? c == 7752
                    : (c <= 7754 || c == 7756))
                  : (c <= 7758 || (c < 7762
                    ? c == 7760
                    : c <= 7762)))))
              : (c <= 7764 || (c < 7778
                ? (c < 7772
                  ? (c < 7768
                    ? c == 7766
                    : (c <= 7768 || c == 7770))
                  : (c <= 7772 || (c < 7776
                    ? c == 7774
                    : c <= 7776)))
                : (c <= 7778 || (c < 7786
                  ? (c < 7782
                    ? c == 7780
                    : (c <= 7782 || c == 7784))
                  : (c <= 7786 || (c < 7790
                    ? c == 7788
                    : c <= 7790)))))))))
          : (c <= 7792 || (c < 7858
            ? (c < 7822
              ? (c < 7808
                ? (c < 7800
                  ? (c < 7796
                    ? c == 7794
                    : (c <= 7796 || c == 7798))
                  : (c <= 7800 || (c < 7804
                    ? c == 7802
                    : (c <= 7804 || c == 7806))))
                : (c <= 7808 || (c < 7816
                  ? (c < 7812
                    ? c == 7810
                    : (c <= 7812 || c == 7814))
                  : (c <= 7816 || (c < 7820
                    ? c == 7818
                    : c <= 7820)))))
              : (c <= 7822 || (c < 7844
                ? (c < 7838
                  ? (c < 7826
                    ? c == 7824
                    : (c <= 7826 || c == 7828))
                  : (c <= 7838 || (c < 7842
                    ? c == 7840
                    : c <= 7842)))
                : (c <= 7844 || (c < 7852
                  ? (c < 7848
                    ? c == 7846
                    : (c <= 7848 || c == 7850))
                  : (c <= 7852 || (c < 7856
                    ? c == 7854
                    : c <= 7856)))))))
            : (c <= 7858 || (c < 7888
              ? (c < 7874
                ? (c < 7866
                  ? (c < 7862
                    ? c == 7860
                    : (c <= 7862 || c == 7864))
                  : (c <= 7866 || (c < 7870
                    ? c == 7868
                    : (c <= 7870 || c == 7872))))
                : (c <= 7874 || (c < 7882
                  ? (c < 7878
                    ? c == 7876
                    : (c <= 7878 || c == 7880))
                  : (c <= 7882 || (c < 7886
                    ? c == 7884
                    : c <= 7886)))))
              : (c <= 7888 || (c < 7902
                ? (c < 7896
                  ? (c < 7892
                    ? c == 7890
                    : (c <= 7892 || c == 7894))
                  : (c <= 7896 || (c < 7900
                    ? c == 7898
                    : c <= 7900)))
                : (c <= 7902 || (c < 7910
                  ? (c < 7906
                    ? c == 7904
                    : (c <= 7906 || c == 7908))
                  : (c <= 7910 || (c < 7914
                    ? c == 7912
                    : c <= 7914)))))))))))
        : (c <= 7916 || (c < 11412
          ? (c < 8473
            ? (c < 8025
              ? (c < 7932
                ? (c < 7924
                  ? (c < 7920
                    ? c == 7918
                    : (c <= 7920 || c == 7922))
                  : (c <= 7924 || (c < 7928
                    ? c == 7926
                    : (c <= 7928 || c == 7930))))
                : (c <= 7932 || (c < 7976
                  ? (c < 7944
                    ? c == 7934
                    : (c <= 7951 || (c >= 7960 && c <= 7965)))
                  : (c <= 7983 || (c < 8008
                    ? (c >= 7992 && c <= 7999)
                    : c <= 8013)))))
              : (c <= 8025 || (c < 8168
                ? (c < 8040
                  ? (c < 8029
                    ? c == 8027
                    : (c <= 8029 || c == 8031))
                  : (c <= 8047 || (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : (c <= 8139 || (c >= 8152 && c <= 8155)))))
                : (c <= 8172 || (c < 8459
                  ? (c < 8450
                    ? (c >= 8184 && c <= 8187)
                    : (c <= 8450 || c == 8455))
                  : (c <= 8461 || (c < 8469
                    ? (c >= 8464 && c <= 8466)
                    : c <= 8469)))))))
            : (c <= 8477 || (c < 11371
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8486
                    ? c == 8484
                    : (c <= 8486 || c == 8488))
                  : (c <= 8493 || (c < 8501
                    ? (c >= 8496 && c <= 8499)
                    : (c <= 8504 || (c >= 8510 && c <= 8511)))))
                : (c <= 8517 || (c < 11362
                  ? (c < 11264
                    ? c == 8579
                    : (c <= 11311 || c == 11360))
                  : (c <= 11364 || (c < 11369
                    ? c == 11367
                    : c <= 11369)))))
              : (c <= 11371 || (c < 11398
                ? (c < 11390
                  ? (c < 11378
                    ? (c >= 11373 && c <= 11376)
                    : (c <= 11378 || c == 11381))
                  : (c <= 11392 || (c < 11396
                    ? c == 11394
                    : c <= 11396)))
                : (c <= 11398 || (c < 11406
                  ? (c < 11402
                    ? c == 11400
                    : (c <= 11402 || c == 11404))
                  : (c <= 11406 || (c < 11410
                    ? c == 11408
                    : c <= 11410)))))))))
          : (c <= 11412 || (c < 11470
            ? (c < 11442
              ? (c < 11428
                ? (c < 11420
                  ? (c < 11416
                    ? c == 11414
                    : (c <= 11416 || c == 11418))
                  : (c <= 11420 || (c < 11424
                    ? c == 11422
                    : (c <= 11424 || c == 11426))))
                : (c <= 11428 || (c < 11436
                  ? (c < 11432
                    ? c == 11430
                    : (c <= 11432 || c == 11434))
                  : (c <= 11436 || (c < 11440
                    ? c == 11438
                    : c <= 11440)))))
              : (c <= 11442 || (c < 11456
                ? (c < 11450
                  ? (c < 11446
                    ? c == 11444
                    : (c <= 11446 || c == 11448))
                  : (c <= 11450 || (c < 11454
                    ? c == 11452
                    : c <= 11454)))
                : (c <= 11456 || (c < 11464
                  ? (c < 11460
                    ? c == 11458
                    : (c <= 11460 || c == 11462))
                  : (c <= 11464 || (c < 11468
                    ? c == 11466
                    : c <= 11468)))))))
            : (c <= 11470 || (c < 11648
              ? (c < 11486
                ? (c < 11478
                  ? (c < 11474
                    ? c == 11472
                    : (c <= 11474 || c == 11476))
                  : (c <= 11478 || (c < 11482
                    ? c == 11480
                    : (c <= 11482 || c == 11484))))
                : (c <= 11486 || (c < 11501
                  ? (c < 11490
                    ? c == 11488
                    : (c <= 11490 || c == 11499))
                  : (c <= 11501 || (c < 11568
                    ? c == 11506
                    : c <= 11623)))))
              : (c <= 11670 || (c < 11728
                ? (c < 11704
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : (c <= 11694 || (c >= 11696 && c <= 11702)))
                  : (c <= 11710 || (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)))
                : (c <= 11734 || (c < 12353
                  ? (c < 12294
                    ? (c >= 11736 && c <= 11742)
                    : (c <= 12294 || c == 12348))
                  : (c <= 12438 || (c < 12449
                    ? c == 12447
                    : c <= 12538)))))))))))))
      : (c <= 12543 || (c < 42940
        ? (c < 42798
          ? (c < 42592
            ? (c < 42562
              ? (c < 40959
                ? (c < 12784
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : (c <= 12686 || (c >= 12704 && c <= 12735)))
                  : (c <= 12799 || (c < 19903
                    ? c == 13312
                    : (c <= 19903 || c == 19968))))
                : (c <= 40980 || (c < 42512
                  ? (c < 42192
                    ? (c >= 40982 && c <= 42124)
                    : (c <= 42231 || (c >= 42240 && c <= 42507)))
                  : (c <= 42527 || (c < 42560
                    ? (c >= 42538 && c <= 42539)
                    : c <= 42560)))))
              : (c <= 42562 || (c < 42578
                ? (c < 42570
                  ? (c < 42566
                    ? c == 42564
                    : (c <= 42566 || c == 42568))
                  : (c <= 42570 || (c < 42574
                    ? c == 42572
                    : (c <= 42574 || c == 42576))))
                : (c <= 42578 || (c < 42586
                  ? (c < 42582
                    ? c == 42580
                    : (c <= 42582 || c == 42584))
                  : (c <= 42586 || (c < 42590
                    ? c == 42588
                    : c <= 42590)))))))
            : (c <= 42592 || (c < 42638
              ? (c < 42624
                ? (c < 42600
                  ? (c < 42596
                    ? c == 42594
                    : (c <= 42596 || c == 42598))
                  : (c <= 42600 || (c < 42604
                    ? c == 42602
                    : (c <= 42604 || c == 42606))))
                : (c <= 42624 || (c < 42632
                  ? (c < 42628
                    ? c == 42626
                    : (c <= 42628 || c == 42630))
                  : (c <= 42632 || (c < 42636
                    ? c == 42634
                    : c <= 42636)))))
              : (c <= 42638 || (c < 42656
                ? (c < 42646
                  ? (c < 42642
                    ? c == 42640
                    : (c <= 42642 || c == 42644))
                  : (c <= 42646 || (c < 42650
                    ? c == 42648
                    : c <= 42650)))
                : (c <= 42725 || (c < 42792
                  ? (c < 42788
                    ? c == 42786
                    : (c <= 42788 || c == 42790))
                  : (c <= 42792 || (c < 42796
                    ? c == 42794
                    : c <= 42796)))))))))
          : (c <= 42798 || (c < 42858
            ? (c < 42830
              ? (c < 42816
                ? (c < 42808
                  ? (c < 42804
                    ? c == 42802
                    : (c <= 42804 || c == 42806))
                  : (c <= 42808 || (c < 42812
                    ? c == 42810
                    : (c <= 42812 || c == 42814))))
                : (c <= 42816 || (c < 42824
                  ? (c < 42820
                    ? c == 42818
                    : (c <= 42820 || c == 42822))
                  : (c <= 42824 || (c < 42828
                    ? c == 42826
                    : c <= 42828)))))
              : (c <= 42830 || (c < 42844
                ? (c < 42838
                  ? (c < 42834
                    ? c == 42832
                    : (c <= 42834 || c == 42836))
                  : (c <= 42838 || (c < 42842
                    ? c == 42840
                    : c <= 42842)))
                : (c <= 42844 || (c < 42852
                  ? (c < 42848
                    ? c == 42846
                    : (c <= 42848 || c == 42850))
                  : (c <= 42852 || (c < 42856
                    ? c == 42854
                    : c <= 42856)))))))
            : (c <= 42858 || (c < 42904
              ? (c < 42884
                ? (c < 42875
                  ? (c < 42862
                    ? c == 42860
                    : (c <= 42862 || c == 42873))
                  : (c <= 42875 || (c < 42880
                    ? (c >= 42877 && c <= 42878)
                    : (c <= 42880 || c == 42882))))
                : (c <= 42884 || (c < 42895
                  ? (c < 42891
                    ? c == 42886
                    : (c <= 42891 || c == 42893))
                  : (c <= 42896 || (c < 42902
                    ? c == 42898
                    : c <= 42902)))))
              : (c <= 42904 || (c < 42918
                ? (c < 42912
                  ? (c < 42908
                    ? c == 42906
                    : (c <= 42908 || c == 42910))
                  : (c <= 42912 || (c < 42916
                    ? c == 42914
                    : c <= 42916)))
                : (c <= 42918 || (c < 42934
                  ? (c < 42922
                    ? c == 42920
                    : (c <= 42926 || (c >= 42928 && c <= 42932)))
                  : (c <= 42934 || (c < 42938
                    ? c == 42936
                    : c <= 42938)))))))))))
        : (c <= 42940 || (c < 64318
          ? (c < 43588
            ? (c < 43072
              ? (c < 42968
                ? (c < 42948
                  ? (c < 42944
                    ? c == 42942
                    : (c <= 42944 || c == 42946))
                  : (c <= 42951 || (c < 42960
                    ? c == 42953
                    : (c <= 42960 || c == 42966))))
                : (c <= 42968 || (c < 43011
                  ? (c < 42999
                    ? c == 42997
                    : (c <= 42999 || (c >= 43003 && c <= 43009)))
                  : (c <= 43013 || (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)))))
              : (c <= 43123 || (c < 43360
                ? (c < 43261
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : (c <= 43255 || c == 43259))
                  : (c <= 43262 || (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)))
                : (c <= 43388 || (c < 43514
                  ? (c < 43488
                    ? (c >= 43396 && c <= 43442)
                    : (c <= 43492 || (c >= 43495 && c <= 43503)))
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))))))
            : (c <= 43595 || (c < 43793
              ? (c < 43712
                ? (c < 43646
                  ? (c < 43633
                    ? (c >= 43616 && c <= 43631)
                    : (c <= 43638 || c == 43642))
                  : (c <= 43695 || (c < 43701
                    ? c == 43697
                    : (c <= 43702 || (c >= 43705 && c <= 43709)))))
                : (c <= 43712 || (c < 43762
                  ? (c < 43739
                    ? c == 43714
                    : (c <= 43740 || (c >= 43744 && c <= 43754)))
                  : (c <= 43762 || (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)))))
              : (c <= 43798 || (c < 55243
                ? (c < 44032
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : (c <= 43822 || (c >= 43968 && c <= 44002)))
                  : (c <= 44032 || (c < 55216
                    ? c == 55203
                    : c <= 55238)))
                : (c <= 55291 || (c < 64287
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : (c <= 64217 || c == 64285))
                  : (c <= 64296 || (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)))))))))
          : (c <= 64318 || (c < 66370
            ? (c < 65482
              ? (c < 65136
                ? (c < 64467
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : (c <= 64324 || (c >= 64326 && c <= 64433)))
                  : (c <= 64829 || (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : (c <= 64967 || (c >= 65008 && c <= 65019)))))
                : (c <= 65140 || (c < 65393
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : (c <= 65338 || (c >= 65382 && c <= 65391)))
                  : (c <= 65437 || (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)))))
              : (c <= 65487 || (c < 65599
                ? (c < 65549
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : (c <= 65500 || (c >= 65536 && c <= 65547)))
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 66208
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : (c <= 65786 || (c >= 66176 && c <= 66204)))
                  : (c <= 66256 || (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66368)))))))
            : (c <= 66377 || (c < 67392
              ? (c < 66816
                ? (c < 66504
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : (c <= 66461 || (c >= 66464 && c <= 66499)))
                  : (c <= 66511 || (c < 66640
                    ? (c >= 66560 && c <= 66599)
                    : (c <= 66717 || (c >= 66736 && c <= 66771)))))
                : (c <= 66855 || (c < 66956
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : (c <= 66938 || (c >= 66940 && c <= 66954)))
                  : (c <= 66962 || (c < 67072
                    ? (c >= 66964 && c <= 66965)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67647
                ? (c < 67594
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : (c <= 67589 || c == 67592))
                  : (c <= 67637 || (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)))
                : (c <= 67669 || (c < 67828
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : (c <= 67742 || (c >= 67808 && c <= 67826)))
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67883)))))))))))))))));
}

static inline bool sym__accounttype_character_set_2(int32_t c) {
  return (c < 7401
    ? (c < 1246
      ? (c < 520
        ? (c < 364
          ? (c < 304
            ? (c < 274
              ? (c < 260
                ? (c < 192
                  ? (c < 170
                    ? (c >= 'A' && c <= 'Z')
                    : (c <= 170 || c == 186))
                  : (c <= 214 || (c < 256
                    ? (c >= 216 && c <= 222)
                    : (c <= 256 || c == 258))))
                : (c <= 260 || (c < 268
                  ? (c < 264
                    ? c == 262
                    : (c <= 264 || c == 266))
                  : (c <= 268 || (c < 272
                    ? c == 270
                    : c <= 272)))))
              : (c <= 274 || (c < 290
                ? (c < 282
                  ? (c < 278
                    ? c == 276
                    : (c <= 278 || c == 280))
                  : (c <= 282 || (c < 286
                    ? c == 284
                    : (c <= 286 || c == 288))))
                : (c <= 290 || (c < 298
                  ? (c < 294
                    ? c == 292
                    : (c <= 294 || c == 296))
                  : (c <= 298 || (c < 302
                    ? c == 300
                    : c <= 302)))))))
            : (c <= 304 || (c < 336
              ? (c < 321
                ? (c < 313
                  ? (c < 308
                    ? c == 306
                    : (c <= 308 || c == 310))
                  : (c <= 313 || (c < 317
                    ? c == 315
                    : (c <= 317 || c == 319))))
                : (c <= 321 || (c < 330
                  ? (c < 325
                    ? c == 323
                    : (c <= 325 || c == 327))
                  : (c <= 330 || (c < 334
                    ? c == 332
                    : c <= 334)))))
              : (c <= 336 || (c < 350
                ? (c < 344
                  ? (c < 340
                    ? c == 338
                    : (c <= 340 || c == 342))
                  : (c <= 344 || (c < 348
                    ? c == 346
                    : c <= 348)))
                : (c <= 350 || (c < 358
                  ? (c < 354
                    ? c == 352
                    : (c <= 354 || c == 356))
                  : (c <= 358 || (c < 362
                    ? c == 360
                    : c <= 362)))))))))
          : (c <= 364 || (c < 455
            ? (c < 406
              ? (c < 381
                ? (c < 372
                  ? (c < 368
                    ? c == 366
                    : (c <= 368 || c == 370))
                  : (c <= 372 || (c < 376
                    ? c == 374
                    : (c <= 377 || c == 379))))
                : (c <= 381 || (c < 393
                  ? (c < 388
                    ? (c >= 385 && c <= 386)
                    : (c <= 388 || (c >= 390 && c <= 391)))
                  : (c <= 395 || (c < 403
                    ? (c >= 398 && c <= 401)
                    : c <= 404)))))
              : (c <= 408 || (c < 428
                ? (c < 420
                  ? (c < 415
                    ? (c >= 412 && c <= 413)
                    : (c <= 416 || c == 418))
                  : (c <= 420 || (c < 425
                    ? (c >= 422 && c <= 423)
                    : c <= 425)))
                : (c <= 428 || (c < 439
                  ? (c < 433
                    ? (c >= 430 && c <= 431)
                    : (c <= 435 || c == 437))
                  : (c <= 440 || (c < 448
                    ? (c >= 443 && c <= 444)
                    : c <= 452)))))))
            : (c <= 455 || (c < 488
              ? (c < 473
                ? (c < 465
                  ? (c < 461
                    ? c == 458
                    : (c <= 461 || c == 463))
                  : (c <= 465 || (c < 469
                    ? c == 467
                    : (c <= 469 || c == 471))))
                : (c <= 473 || (c < 482
                  ? (c < 478
                    ? c == 475
                    : (c <= 478 || c == 480))
                  : (c <= 482 || (c < 486
                    ? c == 484
                    : c <= 486)))))
              : (c <= 488 || (c < 506
                ? (c < 497
                  ? (c < 492
                    ? c == 490
                    : (c <= 492 || c == 494))
                  : (c <= 497 || (c < 502
                    ? c == 500
                    : c <= 504)))
                : (c <= 506 || (c < 514
                  ? (c < 510
                    ? c == 508
                    : (c <= 510 || c == 512))
                  : (c <= 514 || (c < 518
                    ? c == 516
                    : c <= 518)))))))))))
        : (c <= 520 || (c < 1120
          ? (c < 660
            ? (c < 550
              ? (c < 536
                ? (c < 528
                  ? (c < 524
                    ? c == 522
                    : (c <= 524 || c == 526))
                  : (c <= 528 || (c < 532
                    ? c == 530
                    : (c <= 532 || c == 534))))
                : (c <= 536 || (c < 544
                  ? (c < 540
                    ? c == 538
                    : (c <= 540 || c == 542))
                  : (c <= 544 || (c < 548
                    ? c == 546
                    : c <= 548)))))
              : (c <= 550 || (c < 573
                ? (c < 558
                  ? (c < 554
                    ? c == 552
                    : (c <= 554 || c == 556))
                  : (c <= 558 || (c < 562
                    ? c == 560
                    : (c <= 562 || (c >= 570 && c <= 571)))))
                : (c <= 574 || (c < 586
                  ? (c < 579
                    ? c == 577
                    : (c <= 582 || c == 584))
                  : (c <= 586 || (c < 590
                    ? c == 588
                    : c <= 590)))))))
            : (c <= 660 || (c < 988
              ? (c < 910
                ? (c < 895
                  ? (c < 882
                    ? c == 880
                    : (c <= 882 || c == 886))
                  : (c <= 895 || (c < 904
                    ? c == 902
                    : (c <= 906 || c == 908))))
                : (c <= 911 || (c < 978
                  ? (c < 931
                    ? (c >= 913 && c <= 929)
                    : (c <= 939 || c == 975))
                  : (c <= 980 || (c < 986
                    ? c == 984
                    : c <= 986)))))
              : (c <= 988 || (c < 1002
                ? (c < 996
                  ? (c < 992
                    ? c == 990
                    : (c <= 992 || c == 994))
                  : (c <= 996 || (c < 1000
                    ? c == 998
                    : c <= 1000)))
                : (c <= 1002 || (c < 1015
                  ? (c < 1006
                    ? c == 1004
                    : (c <= 1006 || c == 1012))
                  : (c <= 1015 || (c < 1021
                    ? (c >= 1017 && c <= 1018)
                    : c <= 1071)))))))))
          : (c <= 1120 || (c < 1186
            ? (c < 1150
              ? (c < 1136
                ? (c < 1128
                  ? (c < 1124
                    ? c == 1122
                    : (c <= 1124 || c == 1126))
                  : (c <= 1128 || (c < 1132
                    ? c == 1130
                    : (c <= 1132 || c == 1134))))
                : (c <= 1136 || (c < 1144
                  ? (c < 1140
                    ? c == 1138
                    : (c <= 1140 || c == 1142))
                  : (c <= 1144 || (c < 1148
                    ? c == 1146
                    : c <= 1148)))))
              : (c <= 1150 || (c < 1172
                ? (c < 1166
                  ? (c < 1162
                    ? c == 1152
                    : (c <= 1162 || c == 1164))
                  : (c <= 1166 || (c < 1170
                    ? c == 1168
                    : c <= 1170)))
                : (c <= 1172 || (c < 1180
                  ? (c < 1176
                    ? c == 1174
                    : (c <= 1176 || c == 1178))
                  : (c <= 1180 || (c < 1184
                    ? c == 1182
                    : c <= 1184)))))))
            : (c <= 1186 || (c < 1216
              ? (c < 1202
                ? (c < 1194
                  ? (c < 1190
                    ? c == 1188
                    : (c <= 1190 || c == 1192))
                  : (c <= 1194 || (c < 1198
                    ? c == 1196
                    : (c <= 1198 || c == 1200))))
                : (c <= 1202 || (c < 1210
                  ? (c < 1206
                    ? c == 1204
                    : (c <= 1206 || c == 1208))
                  : (c <= 1210 || (c < 1214
                    ? c == 1212
                    : c <= 1214)))))
              : (c <= 1217 || (c < 1232
                ? (c < 1225
                  ? (c < 1221
                    ? c == 1219
                    : (c <= 1221 || c == 1223))
                  : (c <= 1225 || (c < 1229
                    ? c == 1227
                    : c <= 1229)))
                : (c <= 1232 || (c < 1240
                  ? (c < 1236
                    ? c == 1234
                    : (c <= 1236 || c == 1238))
                  : (c <= 1240 || (c < 1244
                    ? c == 1242
                    : c <= 1244)))))))))))))
      : (c <= 1246 || (c < 2979
        ? (c < 2144
          ? (c < 1306
            ? (c < 1276
              ? (c < 1262
                ? (c < 1254
                  ? (c < 1250
                    ? c == 1248
                    : (c <= 1250 || c == 1252))
                  : (c <= 1254 || (c < 1258
                    ? c == 1256
                    : (c <= 1258 || c == 1260))))
                : (c <= 1262 || (c < 1270
                  ? (c < 1266
                    ? c == 1264
                    : (c <= 1266 || c == 1268))
                  : (c <= 1270 || (c < 1274
                    ? c == 1272
                    : c <= 1274)))))
              : (c <= 1276 || (c < 1292
                ? (c < 1284
                  ? (c < 1280
                    ? c == 1278
                    : (c <= 1280 || c == 1282))
                  : (c <= 1284 || (c < 1288
                    ? c == 1286
                    : (c <= 1288 || c == 1290))))
                : (c <= 1292 || (c < 1300
                  ? (c < 1296
                    ? c == 1294
                    : (c <= 1296 || c == 1298))
                  : (c <= 1300 || (c < 1304
                    ? c == 1302
                    : c <= 1304)))))))
            : (c <= 1306 || (c < 1601
              ? (c < 1322
                ? (c < 1314
                  ? (c < 1310
                    ? c == 1308
                    : (c <= 1310 || c == 1312))
                  : (c <= 1314 || (c < 1318
                    ? c == 1316
                    : (c <= 1318 || c == 1320))))
                : (c <= 1322 || (c < 1488
                  ? (c < 1326
                    ? c == 1324
                    : (c <= 1326 || (c >= 1329 && c <= 1366)))
                  : (c <= 1514 || (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1599)))))
              : (c <= 1610 || (c < 1808
                ? (c < 1774
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : (c <= 1747 || c == 1749))
                  : (c <= 1775 || (c < 1791
                    ? (c >= 1786 && c <= 1788)
                    : c <= 1791)))
                : (c <= 1808 || (c < 1994
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : (c <= 1957 || c == 1969))
                  : (c <= 2026 || (c < 2112
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2136)))))))))
          : (c <= 2154 || (c < 2654
            ? (c < 2493
              ? (c < 2418
                ? (c < 2308
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : (c <= 2190 || (c >= 2208 && c <= 2248)))
                  : (c <= 2361 || (c < 2384
                    ? c == 2365
                    : (c <= 2384 || (c >= 2392 && c <= 2401)))))
                : (c <= 2432 || (c < 2474
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : (c <= 2448 || (c >= 2451 && c <= 2472)))
                  : (c <= 2480 || (c < 2486
                    ? c == 2482
                    : c <= 2489)))))
              : (c <= 2493 || (c < 2575
                ? (c < 2544
                  ? (c < 2524
                    ? c == 2510
                    : (c <= 2525 || (c >= 2527 && c <= 2529)))
                  : (c <= 2545 || (c < 2565
                    ? c == 2556
                    : c <= 2570)))
                : (c <= 2576 || (c < 2613
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : (c <= 2608 || (c >= 2610 && c <= 2611)))
                  : (c <= 2614 || (c < 2649
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2652)))))))
            : (c <= 2654 || (c < 2858
              ? (c < 2749
                ? (c < 2707
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : (c <= 2701 || (c >= 2703 && c <= 2705)))
                  : (c <= 2728 || (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : (c <= 2739 || (c >= 2741 && c <= 2745)))))
                : (c <= 2749 || (c < 2821
                  ? (c < 2784
                    ? c == 2768
                    : (c <= 2785 || c == 2809))
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2947
                ? (c < 2908
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : (c <= 2873 || c == 2877))
                  : (c <= 2909 || (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)))
                : (c <= 2947 || (c < 2969
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : (c <= 2960 || (c >= 2962 && c <= 2965)))
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))))))))
        : (c <= 2980 || (c < 4213
          ? (c < 3461
            ? (c < 3218
              ? (c < 3133
                ? (c < 3077
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : (c <= 3001 || c == 3024))
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : (c <= 3112 || (c >= 3114 && c <= 3129)))))
                : (c <= 3133 || (c < 3200
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : (c <= 3165 || (c >= 3168 && c <= 3169)))
                  : (c <= 3200 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3342
                ? (c < 3293
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : (c <= 3257 || c == 3261))
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : (c <= 3314 || (c >= 3332 && c <= 3340)))))
                : (c <= 3344 || (c < 3412
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : (c <= 3389 || c == 3406))
                  : (c <= 3414 || (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)))))))
            : (c <= 3478 || (c < 3773
              ? (c < 3713
                ? (c < 3520
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : (c <= 3515 || c == 3517))
                  : (c <= 3526 || (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : (c <= 3635 || (c >= 3648 && c <= 3653)))))
                : (c <= 3714 || (c < 3749
                  ? (c < 3718
                    ? c == 3716
                    : (c <= 3722 || (c >= 3724 && c <= 3747)))
                  : (c <= 3749 || (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3763)))))
              : (c <= 3773 || (c < 4096
                ? (c < 3904
                  ? (c < 3804
                    ? (c >= 3776 && c <= 3780)
                    : (c <= 3807 || c == 3840))
                  : (c <= 3911 || (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)))
                : (c <= 4138 || (c < 4193
                  ? (c < 4176
                    ? c == 4159
                    : (c <= 4181 || (c >= 4186 && c <= 4189)))
                  : (c <= 4193 || (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)))))))))
          : (c <= 4225 || (c < 5919
            ? (c < 4800
              ? (c < 4696
                ? (c < 4301
                  ? (c < 4256
                    ? c == 4238
                    : (c <= 4293 || c == 4295))
                  : (c <= 4301 || (c < 4682
                    ? (c >= 4352 && c <= 4680)
                    : (c <= 4685 || (c >= 4688 && c <= 4694)))))
                : (c <= 4696 || (c < 4752
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : (c <= 4744 || (c >= 4746 && c <= 4749)))
                  : (c <= 4784 || (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)))))
              : (c <= 4800 || (c < 5024
                ? (c < 4882
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : (c <= 4822 || (c >= 4824 && c <= 4880)))
                  : (c <= 4885 || (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5792
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : (c <= 5759 || (c >= 5761 && c <= 5786)))
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5873 && c <= 5880)
                    : c <= 5905)))))))
            : (c <= 5937 || (c < 6528
              ? (c < 6272
                ? (c < 6016
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : (c <= 5996 || (c >= 5998 && c <= 6000)))
                  : (c <= 6067 || (c < 6176
                    ? c == 6108
                    : (c <= 6210 || (c >= 6212 && c <= 6264)))))
                : (c <= 6276 || (c < 6400
                  ? (c < 6314
                    ? (c >= 6279 && c <= 6312)
                    : (c <= 6314 || (c >= 6320 && c <= 6389)))
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))))
              : (c <= 6571 || (c < 7086
                ? (c < 6917
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : (c <= 6678 || (c >= 6688 && c <= 6740)))
                  : (c <= 6963 || (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)))
                : (c <= 7087 || (c < 7258
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : (c <= 7203 || (c >= 7245 && c <= 7247)))
                  : (c <= 7287 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))))))))))))))
    : (c <= 7404 || (c < 12449
      ? (c < 7914
        ? (c < 7790
          ? (c < 7732
            ? (c < 7702
              ? (c < 7688
                ? (c < 7680
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : (c <= 7414 || c == 7418))
                  : (c <= 7680 || (c < 7684
                    ? c == 7682
                    : (c <= 7684 || c == 7686))))
                : (c <= 7688 || (c < 7696
                  ? (c < 7692
                    ? c == 7690
                    : (c <= 7692 || c == 7694))
                  : (c <= 7696 || (c < 7700
                    ? c == 7698
                    : c <= 7700)))))
              : (c <= 7702 || (c < 7718
                ? (c < 7710
                  ? (c < 7706
                    ? c == 7704
                    : (c <= 7706 || c == 7708))
                  : (c <= 7710 || (c < 7714
                    ? c == 7712
                    : (c <= 7714 || c == 7716))))
                : (c <= 7718 || (c < 7726
                  ? (c < 7722
                    ? c == 7720
                    : (c <= 7722 || c == 7724))
                  : (c <= 7726 || (c < 7730
                    ? c == 7728
                    : c <= 7730)))))))
            : (c <= 7732 || (c < 7762
              ? (c < 7748
                ? (c < 7740
                  ? (c < 7736
                    ? c == 7734
                    : (c <= 7736 || c == 7738))
                  : (c <= 7740 || (c < 7744
                    ? c == 7742
                    : (c <= 7744 || c == 7746))))
                : (c <= 7748 || (c < 7756
                  ? (c < 7752
                    ? c == 7750
                    : (c <= 7752 || c == 7754))
                  : (c <= 7756 || (c < 7760
                    ? c == 7758
                    : c <= 7760)))))
              : (c <= 7762 || (c < 7776
                ? (c < 7770
                  ? (c < 7766
                    ? c == 7764
                    : (c <= 7766 || c == 7768))
                  : (c <= 7770 || (c < 7774
                    ? c == 7772
                    : c <= 7774)))
                : (c <= 7776 || (c < 7784
                  ? (c < 7780
                    ? c == 7778
                    : (c <= 7780 || c == 7782))
                  : (c <= 7784 || (c < 7788
                    ? c == 7786
                    : c <= 7788)))))))))
          : (c <= 7790 || (c < 7856
            ? (c < 7820
              ? (c < 7806
                ? (c < 7798
                  ? (c < 7794
                    ? c == 7792
                    : (c <= 7794 || c == 7796))
                  : (c <= 7798 || (c < 7802
                    ? c == 7800
                    : (c <= 7802 || c == 7804))))
                : (c <= 7806 || (c < 7814
                  ? (c < 7810
                    ? c == 7808
                    : (c <= 7810 || c == 7812))
                  : (c <= 7814 || (c < 7818
                    ? c == 7816
                    : c <= 7818)))))
              : (c <= 7820 || (c < 7842
                ? (c < 7828
                  ? (c < 7824
                    ? c == 7822
                    : (c <= 7824 || c == 7826))
                  : (c <= 7828 || (c < 7840
                    ? c == 7838
                    : c <= 7840)))
                : (c <= 7842 || (c < 7850
                  ? (c < 7846
                    ? c == 7844
                    : (c <= 7846 || c == 7848))
                  : (c <= 7850 || (c < 7854
                    ? c == 7852
                    : c <= 7854)))))))
            : (c <= 7856 || (c < 7886
              ? (c < 7872
                ? (c < 7864
                  ? (c < 7860
                    ? c == 7858
                    : (c <= 7860 || c == 7862))
                  : (c <= 7864 || (c < 7868
                    ? c == 7866
                    : (c <= 7868 || c == 7870))))
                : (c <= 7872 || (c < 7880
                  ? (c < 7876
                    ? c == 7874
                    : (c <= 7876 || c == 7878))
                  : (c <= 7880 || (c < 7884
                    ? c == 7882
                    : c <= 7884)))))
              : (c <= 7886 || (c < 7900
                ? (c < 7894
                  ? (c < 7890
                    ? c == 7888
                    : (c <= 7890 || c == 7892))
                  : (c <= 7894 || (c < 7898
                    ? c == 7896
                    : c <= 7898)))
                : (c <= 7900 || (c < 7908
                  ? (c < 7904
                    ? c == 7902
                    : (c <= 7904 || c == 7906))
                  : (c <= 7908 || (c < 7912
                    ? c == 7910
                    : c <= 7912)))))))))))
        : (c <= 7914 || (c < 11410
          ? (c < 8469
            ? (c < 8008
              ? (c < 7930
                ? (c < 7922
                  ? (c < 7918
                    ? c == 7916
                    : (c <= 7918 || c == 7920))
                  : (c <= 7922 || (c < 7926
                    ? c == 7924
                    : (c <= 7926 || c == 7928))))
                : (c <= 7930 || (c < 7960
                  ? (c < 7934
                    ? c == 7932
                    : (c <= 7934 || (c >= 7944 && c <= 7951)))
                  : (c <= 7965 || (c < 7992
                    ? (c >= 7976 && c <= 7983)
                    : c <= 7999)))))
              : (c <= 8013 || (c < 8152
                ? (c < 8031
                  ? (c < 8027
                    ? c == 8025
                    : (c <= 8027 || c == 8029))
                  : (c <= 8031 || (c < 8120
                    ? (c >= 8040 && c <= 8047)
                    : (c <= 8123 || (c >= 8136 && c <= 8139)))))
                : (c <= 8155 || (c < 8455
                  ? (c < 8184
                    ? (c >= 8168 && c <= 8172)
                    : (c <= 8187 || c == 8450))
                  : (c <= 8455 || (c < 8464
                    ? (c >= 8459 && c <= 8461)
                    : c <= 8466)))))))
            : (c <= 8469 || (c < 11369
              ? (c < 8510
                ? (c < 8488
                  ? (c < 8484
                    ? (c >= 8473 && c <= 8477)
                    : (c <= 8484 || c == 8486))
                  : (c <= 8488 || (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : (c <= 8499 || (c >= 8501 && c <= 8504)))))
                : (c <= 8511 || (c < 11360
                  ? (c < 8579
                    ? c == 8517
                    : (c <= 8579 || (c >= 11264 && c <= 11311)))
                  : (c <= 11360 || (c < 11367
                    ? (c >= 11362 && c <= 11364)
                    : c <= 11367)))))
              : (c <= 11369 || (c < 11396
                ? (c < 11381
                  ? (c < 11373
                    ? c == 11371
                    : (c <= 11376 || c == 11378))
                  : (c <= 11381 || (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)))
                : (c <= 11396 || (c < 11404
                  ? (c < 11400
                    ? c == 11398
                    : (c <= 11400 || c == 11402))
                  : (c <= 11404 || (c < 11408
                    ? c == 11406
                    : c <= 11408)))))))))
          : (c <= 11410 || (c < 11468
            ? (c < 11440
              ? (c < 11426
                ? (c < 11418
                  ? (c < 11414
                    ? c == 11412
                    : (c <= 11414 || c == 11416))
                  : (c <= 11418 || (c < 11422
                    ? c == 11420
                    : (c <= 11422 || c == 11424))))
                : (c <= 11426 || (c < 11434
                  ? (c < 11430
                    ? c == 11428
                    : (c <= 11430 || c == 11432))
                  : (c <= 11434 || (c < 11438
                    ? c == 11436
                    : c <= 11438)))))
              : (c <= 11440 || (c < 11454
                ? (c < 11448
                  ? (c < 11444
                    ? c == 11442
                    : (c <= 11444 || c == 11446))
                  : (c <= 11448 || (c < 11452
                    ? c == 11450
                    : c <= 11452)))
                : (c <= 11454 || (c < 11462
                  ? (c < 11458
                    ? c == 11456
                    : (c <= 11458 || c == 11460))
                  : (c <= 11462 || (c < 11466
                    ? c == 11464
                    : c <= 11466)))))))
            : (c <= 11468 || (c < 11568
              ? (c < 11484
                ? (c < 11476
                  ? (c < 11472
                    ? c == 11470
                    : (c <= 11472 || c == 11474))
                  : (c <= 11476 || (c < 11480
                    ? c == 11478
                    : (c <= 11480 || c == 11482))))
                : (c <= 11484 || (c < 11499
                  ? (c < 11488
                    ? c == 11486
                    : (c <= 11488 || c == 11490))
                  : (c <= 11499 || (c < 11506
                    ? c == 11501
                    : c <= 11506)))))
              : (c <= 11623 || (c < 11720
                ? (c < 11696
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : (c <= 11686 || (c >= 11688 && c <= 11694)))
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 12348
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : (c <= 11742 || c == 12294))
                  : (c <= 12348 || (c < 12447
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)))))))))))))
      : (c <= 12538 || (c < 42938
        ? (c < 42796
          ? (c < 42590
            ? (c < 42560
              ? (c < 19968
                ? (c < 12704
                  ? (c < 12549
                    ? c == 12543
                    : (c <= 12591 || (c >= 12593 && c <= 12686)))
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : (c <= 13312 || c == 19903))))
                : (c <= 19968 || (c < 42240
                  ? (c < 40982
                    ? (c >= 40959 && c <= 40980)
                    : (c <= 42124 || (c >= 42192 && c <= 42231)))
                  : (c <= 42507 || (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)))))
              : (c <= 42560 || (c < 42576
                ? (c < 42568
                  ? (c < 42564
                    ? c == 42562
                    : (c <= 42564 || c == 42566))
                  : (c <= 42568 || (c < 42572
                    ? c == 42570
                    : (c <= 42572 || c == 42574))))
                : (c <= 42576 || (c < 42584
                  ? (c < 42580
                    ? c == 42578
                    : (c <= 42580 || c == 42582))
                  : (c <= 42584 || (c < 42588
                    ? c == 42586
                    : c <= 42588)))))))
            : (c <= 42590 || (c < 42636
              ? (c < 42606
                ? (c < 42598
                  ? (c < 42594
                    ? c == 42592
                    : (c <= 42594 || c == 42596))
                  : (c <= 42598 || (c < 42602
                    ? c == 42600
                    : (c <= 42602 || c == 42604))))
                : (c <= 42606 || (c < 42630
                  ? (c < 42626
                    ? c == 42624
                    : (c <= 42626 || c == 42628))
                  : (c <= 42630 || (c < 42634
                    ? c == 42632
                    : c <= 42634)))))
              : (c <= 42636 || (c < 42650
                ? (c < 42644
                  ? (c < 42640
                    ? c == 42638
                    : (c <= 42640 || c == 42642))
                  : (c <= 42644 || (c < 42648
                    ? c == 42646
                    : c <= 42648)))
                : (c <= 42650 || (c < 42790
                  ? (c < 42786
                    ? (c >= 42656 && c <= 42725)
                    : (c <= 42786 || c == 42788))
                  : (c <= 42790 || (c < 42794
                    ? c == 42792
                    : c <= 42794)))))))))
          : (c <= 42796 || (c < 42856
            ? (c < 42828
              ? (c < 42814
                ? (c < 42806
                  ? (c < 42802
                    ? c == 42798
                    : (c <= 42802 || c == 42804))
                  : (c <= 42806 || (c < 42810
                    ? c == 42808
                    : (c <= 42810 || c == 42812))))
                : (c <= 42814 || (c < 42822
                  ? (c < 42818
                    ? c == 42816
                    : (c <= 42818 || c == 42820))
                  : (c <= 42822 || (c < 42826
                    ? c == 42824
                    : c <= 42826)))))
              : (c <= 42828 || (c < 42842
                ? (c < 42836
                  ? (c < 42832
                    ? c == 42830
                    : (c <= 42832 || c == 42834))
                  : (c <= 42836 || (c < 42840
                    ? c == 42838
                    : c <= 42840)))
                : (c <= 42842 || (c < 42850
                  ? (c < 42846
                    ? c == 42844
                    : (c <= 42846 || c == 42848))
                  : (c <= 42850 || (c < 42854
                    ? c == 42852
                    : c <= 42854)))))))
            : (c <= 42856 || (c < 42902
              ? (c < 42882
                ? (c < 42873
                  ? (c < 42860
                    ? c == 42858
                    : (c <= 42860 || c == 42862))
                  : (c <= 42873 || (c < 42877
                    ? c == 42875
                    : (c <= 42878 || c == 42880))))
                : (c <= 42882 || (c < 42893
                  ? (c < 42886
                    ? c == 42884
                    : (c <= 42886 || c == 42891))
                  : (c <= 42893 || (c < 42898
                    ? (c >= 42895 && c <= 42896)
                    : c <= 42898)))))
              : (c <= 42902 || (c < 42916
                ? (c < 42910
                  ? (c < 42906
                    ? c == 42904
                    : (c <= 42906 || c == 42908))
                  : (c <= 42910 || (c < 42914
                    ? c == 42912
                    : c <= 42914)))
                : (c <= 42916 || (c < 42928
                  ? (c < 42920
                    ? c == 42918
                    : (c <= 42920 || (c >= 42922 && c <= 42926)))
                  : (c <= 42932 || (c < 42936
                    ? c == 42934
                    : c <= 42936)))))))))))
        : (c <= 42938 || (c < 64318
          ? (c < 43588
            ? (c < 43020
              ? (c < 42966
                ? (c < 42946
                  ? (c < 42942
                    ? c == 42940
                    : (c <= 42942 || c == 42944))
                  : (c <= 42946 || (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : (c <= 42953 || c == 42960))))
                : (c <= 42966 || (c < 43003
                  ? (c < 42997
                    ? c == 42968
                    : (c <= 42997 || c == 42999))
                  : (c <= 43009 || (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)))))
              : (c <= 43042 || (c < 43360
                ? (c < 43259
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : (c <= 43187 || (c >= 43250 && c <= 43255)))
                  : (c <= 43259 || (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : (c <= 43301 || (c >= 43312 && c <= 43334)))))
                : (c <= 43388 || (c < 43514
                  ? (c < 43488
                    ? (c >= 43396 && c <= 43442)
                    : (c <= 43492 || (c >= 43495 && c <= 43503)))
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))))))
            : (c <= 43595 || (c < 43793
              ? (c < 43712
                ? (c < 43646
                  ? (c < 43633
                    ? (c >= 43616 && c <= 43631)
                    : (c <= 43638 || c == 43642))
                  : (c <= 43695 || (c < 43701
                    ? c == 43697
                    : (c <= 43702 || (c >= 43705 && c <= 43709)))))
                : (c <= 43712 || (c < 43762
                  ? (c < 43739
                    ? c == 43714
                    : (c <= 43740 || (c >= 43744 && c <= 43754)))
                  : (c <= 43762 || (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)))))
              : (c <= 43798 || (c < 55243
                ? (c < 44032
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : (c <= 43822 || (c >= 43968 && c <= 44002)))
                  : (c <= 44032 || (c < 55216
                    ? c == 55203
                    : c <= 55238)))
                : (c <= 55291 || (c < 64287
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : (c <= 64217 || c == 64285))
                  : (c <= 64296 || (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)))))))))
          : (c <= 64318 || (c < 66370
            ? (c < 65482
              ? (c < 65136
                ? (c < 64467
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : (c <= 64324 || (c >= 64326 && c <= 64433)))
                  : (c <= 64829 || (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : (c <= 64967 || (c >= 65008 && c <= 65019)))))
                : (c <= 65140 || (c < 65393
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : (c <= 65338 || (c >= 65382 && c <= 65391)))
                  : (c <= 65437 || (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)))))
              : (c <= 65487 || (c < 65599
                ? (c < 65549
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : (c <= 65500 || (c >= 65536 && c <= 65547)))
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 66208
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : (c <= 65786 || (c >= 66176 && c <= 66204)))
                  : (c <= 66256 || (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66368)))))))
            : (c <= 66377 || (c < 67392
              ? (c < 66816
                ? (c < 66504
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : (c <= 66461 || (c >= 66464 && c <= 66499)))
                  : (c <= 66511 || (c < 66640
                    ? (c >= 66560 && c <= 66599)
                    : (c <= 66717 || (c >= 66736 && c <= 66771)))))
                : (c <= 66855 || (c < 66956
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : (c <= 66938 || (c >= 66940 && c <= 66954)))
                  : (c <= 66962 || (c < 67072
                    ? (c >= 66964 && c <= 66965)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67647
                ? (c < 67594
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : (c <= 67589 || c == 67592))
                  : (c <= 67637 || (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)))
                : (c <= 67669 || (c < 67828
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : (c <= 67742 || (c >= 67808 && c <= 67826)))
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67883)))))))))))))))));
}

static inline bool sym__accounttype_character_set_3(int32_t c) {
  return (c < 6784
    ? (c < 3086
      ? (c < 2437
        ? (c < 1568
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 1015
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))
              : (c <= 1153 || (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))))))
          : (c <= 1610 || (c < 2048
            ? (c < 1808
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))))
              : (c <= 1808 || (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))))
            : (c <= 2069 || (c < 2208
              ? (c < 2112
                ? (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : c <= 2432)))))))))
        : (c <= 2444 || (c < 2749
          ? (c < 2579
            ? (c < 2524
              ? (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))))
              : (c <= 2525 || (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))))
            : (c <= 2600 || (c < 2674
              ? (c < 2616
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))))
              : (c <= 2676 || (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))))))
          : (c <= 2749 || (c < 2929
            ? (c < 2858
              ? (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2927)))))
            : (c <= 2935 || (c < 2974
              ? (c < 2962
                ? (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))
              : (c <= 2975 || (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : c <= 3084)))))))))))
      : (c <= 3088 || (c < 4193
        ? (c < 3482
          ? (c < 3261
            ? (c < 3192
              ? (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))))
              : (c <= 3198 || (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))
            : (c <= 3261 || (c < 3389
              ? (c < 3313
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3430
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3416 && c <= 3425)))
                : (c <= 3448 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3762
            ? (c < 3664
              ? (c < 3558
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3567 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3904
              ? (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))))
              : (c <= 3911 || (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5121
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4824
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6160
            ? (c < 5984
              ? (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : c <= 6137)))))
            : (c <= 6169 || (c < 6470
              ? (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))
              : (c <= 6509 || (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)))))))))))))
    : (c <= 6793 || (c < 43216
      ? (c < 11499
        ? (c < 8126
          ? (c < 7406
            ? (c < 7168
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))))
              : (c <= 7203 || (c < 7312
                ? (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8016
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8450
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8517
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))
              : (c <= 8521 || (c < 9450
                ? (c < 8528
                  ? c == 8526
                  : (c <= 8585 || (c >= 9312 && c <= 9371)))
                : (c <= 9471 || (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : c <= 11492)))))))))
        : (c <= 11502 || (c < 12784
          ? (c < 11728
            ? (c < 11648
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))
            : (c <= 11734 || (c < 12445
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12447 || (c < 12593
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : c <= 12735)))))))
          : (c <= 12799 || (c < 42656
            ? (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43056
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43061 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65345
        ? (c < 43816
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43739
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44016
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44025 || (c < 55203
                  ? c == 44032
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__accounttype_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__accountname_character_set_1(int32_t c) {
  return (c < 7406
    ? (c < 1266
      ? (c < 528
        ? (c < 364
          ? (c < 300
            ? (c < 270
              ? (c < 216
                ? (c < 178
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : (c <= 'Z' || c == 170))
                  : (c <= 179 || (c < 188
                    ? (c >= 185 && c <= 186)
                    : (c <= 190 || (c >= 192 && c <= 214)))))
                : (c <= 222 || (c < 262
                  ? (c < 258
                    ? c == 256
                    : (c <= 258 || c == 260))
                  : (c <= 262 || (c < 266
                    ? c == 264
                    : (c <= 266 || c == 268))))))
              : (c <= 270 || (c < 286
                ? (c < 278
                  ? (c < 274
                    ? c == 272
                    : (c <= 274 || c == 276))
                  : (c <= 278 || (c < 282
                    ? c == 280
                    : (c <= 282 || c == 284))))
                : (c <= 286 || (c < 294
                  ? (c < 290
                    ? c == 288
                    : (c <= 290 || c == 292))
                  : (c <= 294 || (c < 298
                    ? c == 296
                    : c <= 298)))))))
            : (c <= 300 || (c < 334
              ? (c < 317
                ? (c < 308
                  ? (c < 304
                    ? c == 302
                    : (c <= 304 || c == 306))
                  : (c <= 308 || (c < 313
                    ? c == 310
                    : (c <= 313 || c == 315))))
                : (c <= 317 || (c < 325
                  ? (c < 321
                    ? c == 319
                    : (c <= 321 || c == 323))
                  : (c <= 325 || (c < 330
                    ? c == 327
                    : (c <= 330 || c == 332))))))
              : (c <= 334 || (c < 350
                ? (c < 342
                  ? (c < 338
                    ? c == 336
                    : (c <= 338 || c == 340))
                  : (c <= 342 || (c < 346
                    ? c == 344
                    : (c <= 346 || c == 348))))
                : (c <= 350 || (c < 358
                  ? (c < 354
                    ? c == 352
                    : (c <= 354 || c == 356))
                  : (c <= 358 || (c < 362
                    ? c == 360
                    : c <= 362)))))))))
          : (c <= 364 || (c < 461
            ? (c < 412
              ? (c < 381
                ? (c < 372
                  ? (c < 368
                    ? c == 366
                    : (c <= 368 || c == 370))
                  : (c <= 372 || (c < 376
                    ? c == 374
                    : (c <= 377 || c == 379))))
                : (c <= 381 || (c < 393
                  ? (c < 388
                    ? (c >= 385 && c <= 386)
                    : (c <= 388 || (c >= 390 && c <= 391)))
                  : (c <= 395 || (c < 403
                    ? (c >= 398 && c <= 401)
                    : (c <= 404 || (c >= 406 && c <= 408)))))))
              : (c <= 413 || (c < 433
                ? (c < 422
                  ? (c < 418
                    ? (c >= 415 && c <= 416)
                    : (c <= 418 || c == 420))
                  : (c <= 423 || (c < 428
                    ? c == 425
                    : (c <= 428 || (c >= 430 && c <= 431)))))
                : (c <= 435 || (c < 448
                  ? (c < 439
                    ? c == 437
                    : (c <= 440 || (c >= 443 && c <= 444)))
                  : (c <= 452 || (c < 458
                    ? c == 455
                    : c <= 458)))))))
            : (c <= 461 || (c < 494
              ? (c < 478
                ? (c < 469
                  ? (c < 465
                    ? c == 463
                    : (c <= 465 || c == 467))
                  : (c <= 469 || (c < 473
                    ? c == 471
                    : (c <= 473 || c == 475))))
                : (c <= 478 || (c < 486
                  ? (c < 482
                    ? c == 480
                    : (c <= 482 || c == 484))
                  : (c <= 486 || (c < 490
                    ? c == 488
                    : (c <= 490 || c == 492))))))
              : (c <= 494 || (c < 514
                ? (c < 506
                  ? (c < 500
                    ? c == 497
                    : (c <= 500 || (c >= 502 && c <= 504)))
                  : (c <= 506 || (c < 510
                    ? c == 508
                    : (c <= 510 || c == 512))))
                : (c <= 514 || (c < 522
                  ? (c < 518
                    ? c == 516
                    : (c <= 518 || c == 520))
                  : (c <= 522 || (c < 526
                    ? c == 524
                    : c <= 526)))))))))))
        : (c <= 528 || (c < 1134
          ? (c < 902
            ? (c < 560
              ? (c < 544
                ? (c < 536
                  ? (c < 532
                    ? c == 530
                    : (c <= 532 || c == 534))
                  : (c <= 536 || (c < 540
                    ? c == 538
                    : (c <= 540 || c == 542))))
                : (c <= 544 || (c < 552
                  ? (c < 548
                    ? c == 546
                    : (c <= 548 || c == 550))
                  : (c <= 552 || (c < 556
                    ? c == 554
                    : (c <= 556 || c == 558))))))
              : (c <= 560 || (c < 588
                ? (c < 577
                  ? (c < 570
                    ? c == 562
                    : (c <= 571 || (c >= 573 && c <= 574)))
                  : (c <= 577 || (c < 584
                    ? (c >= 579 && c <= 582)
                    : (c <= 584 || c == 586))))
                : (c <= 588 || (c < 882
                  ? (c < 660
                    ? c == 590
                    : (c <= 660 || c == 880))
                  : (c <= 882 || (c < 895
                    ? c == 886
                    : c <= 895)))))))
            : (c <= 902 || (c < 1000
              ? (c < 984
                ? (c < 913
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : (c <= 908 || (c >= 910 && c <= 911)))
                  : (c <= 929 || (c < 975
                    ? (c >= 931 && c <= 939)
                    : (c <= 975 || (c >= 978 && c <= 980)))))
                : (c <= 984 || (c < 992
                  ? (c < 988
                    ? c == 986
                    : (c <= 988 || c == 990))
                  : (c <= 992 || (c < 996
                    ? c == 994
                    : (c <= 996 || c == 998))))))
              : (c <= 1000 || (c < 1120
                ? (c < 1012
                  ? (c < 1004
                    ? c == 1002
                    : (c <= 1004 || c == 1006))
                  : (c <= 1012 || (c < 1017
                    ? c == 1015
                    : (c <= 1018 || (c >= 1021 && c <= 1071)))))
                : (c <= 1120 || (c < 1128
                  ? (c < 1124
                    ? c == 1122
                    : (c <= 1124 || c == 1126))
                  : (c <= 1128 || (c < 1132
                    ? c == 1130
                    : c <= 1132)))))))))
          : (c <= 1134 || (c < 1204
            ? (c < 1174
              ? (c < 1150
                ? (c < 1142
                  ? (c < 1138
                    ? c == 1136
                    : (c <= 1138 || c == 1140))
                  : (c <= 1142 || (c < 1146
                    ? c == 1144
                    : (c <= 1146 || c == 1148))))
                : (c <= 1150 || (c < 1166
                  ? (c < 1162
                    ? c == 1152
                    : (c <= 1162 || c == 1164))
                  : (c <= 1166 || (c < 1170
                    ? c == 1168
                    : (c <= 1170 || c == 1172))))))
              : (c <= 1174 || (c < 1190
                ? (c < 1182
                  ? (c < 1178
                    ? c == 1176
                    : (c <= 1178 || c == 1180))
                  : (c <= 1182 || (c < 1186
                    ? c == 1184
                    : (c <= 1186 || c == 1188))))
                : (c <= 1190 || (c < 1198
                  ? (c < 1194
                    ? c == 1192
                    : (c <= 1194 || c == 1196))
                  : (c <= 1198 || (c < 1202
                    ? c == 1200
                    : c <= 1202)))))))
            : (c <= 1204 || (c < 1236
              ? (c < 1221
                ? (c < 1212
                  ? (c < 1208
                    ? c == 1206
                    : (c <= 1208 || c == 1210))
                  : (c <= 1212 || (c < 1216
                    ? c == 1214
                    : (c <= 1217 || c == 1219))))
                : (c <= 1221 || (c < 1229
                  ? (c < 1225
                    ? c == 1223
                    : (c <= 1225 || c == 1227))
                  : (c <= 1229 || (c < 1234
                    ? c == 1232
                    : c <= 1234)))))
              : (c <= 1236 || (c < 1252
                ? (c < 1244
                  ? (c < 1240
                    ? c == 1238
                    : (c <= 1240 || c == 1242))
                  : (c <= 1244 || (c < 1248
                    ? c == 1246
                    : (c <= 1248 || c == 1250))))
                : (c <= 1252 || (c < 1260
                  ? (c < 1256
                    ? c == 1254
                    : (c <= 1256 || c == 1258))
                  : (c <= 1260 || (c < 1264
                    ? c == 1262
                    : c <= 1264)))))))))))))
      : (c <= 1266 || (c < 3168
        ? (c < 2474
          ? (c < 1329
            ? (c < 1298
              ? (c < 1282
                ? (c < 1274
                  ? (c < 1270
                    ? c == 1268
                    : (c <= 1270 || c == 1272))
                  : (c <= 1274 || (c < 1278
                    ? c == 1276
                    : (c <= 1278 || c == 1280))))
                : (c <= 1282 || (c < 1290
                  ? (c < 1286
                    ? c == 1284
                    : (c <= 1286 || c == 1288))
                  : (c <= 1290 || (c < 1294
                    ? c == 1292
                    : (c <= 1294 || c == 1296))))))
              : (c <= 1298 || (c < 1314
                ? (c < 1306
                  ? (c < 1302
                    ? c == 1300
                    : (c <= 1302 || c == 1304))
                  : (c <= 1306 || (c < 1310
                    ? c == 1308
                    : (c <= 1310 || c == 1312))))
                : (c <= 1314 || (c < 1322
                  ? (c < 1318
                    ? c == 1316
                    : (c <= 1318 || c == 1320))
                  : (c <= 1322 || (c < 1326
                    ? c == 1324
                    : c <= 1326)))))))
            : (c <= 1366 || (c < 2048
              ? (c < 1749
                ? (c < 1601
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : (c <= 1522 || (c >= 1568 && c <= 1599)))
                  : (c <= 1610 || (c < 1646
                    ? (c >= 1632 && c <= 1641)
                    : (c <= 1647 || (c >= 1649 && c <= 1747)))))
                : (c <= 1749 || (c < 1810
                  ? (c < 1791
                    ? (c >= 1774 && c <= 1788)
                    : (c <= 1791 || c == 1808))
                  : (c <= 1839 || (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : (c <= 1969 || (c >= 1984 && c <= 2026)))))))
              : (c <= 2069 || (c < 2384
                ? (c < 2185
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : (c <= 2154 || (c >= 2160 && c <= 2183)))
                  : (c <= 2190 || (c < 2308
                    ? (c >= 2208 && c <= 2248)
                    : (c <= 2361 || c == 2365))))
                : (c <= 2384 || (c < 2437
                  ? (c < 2406
                    ? (c >= 2392 && c <= 2401)
                    : (c <= 2415 || (c >= 2418 && c <= 2432)))
                  : (c <= 2444 || (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)))))))))
          : (c <= 2480 || (c < 2809
            ? (c < 2616
              ? (c < 2548
                ? (c < 2510
                  ? (c < 2486
                    ? c == 2482
                    : (c <= 2489 || c == 2493))
                  : (c <= 2510 || (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : (c <= 2529 || (c >= 2534 && c <= 2545)))))
                : (c <= 2553 || (c < 2579
                  ? (c < 2565
                    ? c == 2556
                    : (c <= 2570 || (c >= 2575 && c <= 2576)))
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
              : (c <= 2617 || (c < 2730
                ? (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : (c <= 2654 || (c >= 2662 && c <= 2671)))
                  : (c <= 2676 || (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : (c <= 2705 || (c >= 2707 && c <= 2728)))))
                : (c <= 2736 || (c < 2768
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : (c <= 2745 || c == 2749))
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2799)))))))
            : (c <= 2809 || (c < 2969
              ? (c < 2908
                ? (c < 2858
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : (c <= 2832 || (c >= 2835 && c <= 2856)))
                  : (c <= 2864 || (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : (c <= 2873 || c == 2877))))
                : (c <= 2909 || (c < 2947
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2913)
                    : (c <= 2927 || (c >= 2929 && c <= 2935)))
                  : (c <= 2947 || (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
              : (c <= 2970 || (c < 3077
                ? (c < 2984
                  ? (c < 2974
                    ? c == 2972
                    : (c <= 2975 || (c >= 2979 && c <= 2980)))
                  : (c <= 2986 || (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : (c <= 3024 || (c >= 3046 && c <= 3058)))))
                : (c <= 3084 || (c < 3133
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : (c <= 3112 || (c >= 3114 && c <= 3129)))
                  : (c <= 3133 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))))
        : (c <= 3169 || (c < 4352
          ? (c < 3648
            ? (c < 3346
              ? (c < 3253
                ? (c < 3205
                  ? (c < 3192
                    ? (c >= 3174 && c <= 3183)
                    : (c <= 3198 || c == 3200))
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : (c <= 3240 || (c >= 3242 && c <= 3251)))))
                : (c <= 3257 || (c < 3302
                  ? (c < 3293
                    ? c == 3261
                    : (c <= 3294 || (c >= 3296 && c <= 3297)))
                  : (c <= 3311 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : (c <= 3340 || (c >= 3342 && c <= 3344)))))))
              : (c <= 3386 || (c < 3482
                ? (c < 3416
                  ? (c < 3406
                    ? c == 3389
                    : (c <= 3406 || (c >= 3412 && c <= 3414)))
                  : (c <= 3425 || (c < 3450
                    ? (c >= 3430 && c <= 3448)
                    : (c <= 3455 || (c >= 3461 && c <= 3478)))))
                : (c <= 3505 || (c < 3558
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : (c <= 3517 || (c >= 3520 && c <= 3526)))
                  : (c <= 3567 || (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3635)))))))
            : (c <= 3653 || (c < 3913
              ? (c < 3762
                ? (c < 3718
                  ? (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : (c <= 3714 || c == 3716))
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : (c <= 3749 || (c >= 3751 && c <= 3760)))))
                : (c <= 3763 || (c < 3804
                  ? (c < 3776
                    ? c == 3773
                    : (c <= 3780 || (c >= 3792 && c <= 3801)))
                  : (c <= 3807 || (c < 3872
                    ? c == 3840
                    : (c <= 3891 || (c >= 3904 && c <= 3911)))))))
              : (c <= 3948 || (c < 4206
                ? (c < 4176
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : (c <= 4138 || (c >= 4159 && c <= 4169)))
                  : (c <= 4181 || (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : (c <= 4193 || (c >= 4197 && c <= 4198)))))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : (c <= 4238 || (c >= 4240 && c <= 4249)))
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))))))))
          : (c <= 4680 || (c < 6112
            ? (c < 4969
              ? (c < 4786
                ? (c < 4698
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : (c <= 4694 || c == 4696))
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : (c <= 4749 || (c >= 4752 && c <= 4784)))))
                : (c <= 4789 || (c < 4808
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : (c <= 4800 || (c >= 4802 && c <= 4805)))
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
              : (c <= 4988 || (c < 5888
                ? (c < 5743
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : (c <= 5109 || (c >= 5121 && c <= 5740)))
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : (c <= 5866 || (c >= 5870 && c <= 5880)))))
                : (c <= 5905 || (c < 5998
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : (c <= 5969 || (c >= 5984 && c <= 5996)))
                  : (c <= 6000 || (c < 6108
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6108)))))))
            : (c <= 6121 || (c < 6656
              ? (c < 6320
                ? (c < 6212
                  ? (c < 6160
                    ? (c >= 6128 && c <= 6137)
                    : (c <= 6169 || (c >= 6176 && c <= 6210)))
                  : (c <= 6264 || (c < 6279
                    ? (c >= 6272 && c <= 6276)
                    : (c <= 6312 || c == 6314))))
                : (c <= 6389 || (c < 6528
                  ? (c < 6470
                    ? (c >= 6400 && c <= 6430)
                    : (c <= 6509 || (c >= 6512 && c <= 6516)))
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))
              : (c <= 6678 || (c < 7086
                ? (c < 6917
                  ? (c < 6784
                    ? (c >= 6688 && c <= 6740)
                    : (c <= 6793 || (c >= 6800 && c <= 6809)))
                  : (c <= 6963 || (c < 6992
                    ? (c >= 6981 && c <= 6988)
                    : (c <= 7001 || (c >= 7043 && c <= 7072)))))
                : (c <= 7141 || (c < 7312
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7203)
                    : (c <= 7241 || (c >= 7245 && c <= 7287)))
                  : (c <= 7354 || (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)))))))))))))))
    : (c <= 7411 || (c < 12690
      ? (c < 7930
        ? (c < 7798
          ? (c < 7736
            ? (c < 7706
              ? (c < 7690
                ? (c < 7682
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : (c <= 7418 || c == 7680))
                  : (c <= 7682 || (c < 7686
                    ? c == 7684
                    : (c <= 7686 || c == 7688))))
                : (c <= 7690 || (c < 7698
                  ? (c < 7694
                    ? c == 7692
                    : (c <= 7694 || c == 7696))
                  : (c <= 7698 || (c < 7702
                    ? c == 7700
                    : (c <= 7702 || c == 7704))))))
              : (c <= 7706 || (c < 7722
                ? (c < 7714
                  ? (c < 7710
                    ? c == 7708
                    : (c <= 7710 || c == 7712))
                  : (c <= 7714 || (c < 7718
                    ? c == 7716
                    : (c <= 7718 || c == 7720))))
                : (c <= 7722 || (c < 7730
                  ? (c < 7726
                    ? c == 7724
                    : (c <= 7726 || c == 7728))
                  : (c <= 7730 || (c < 7734
                    ? c == 7732
                    : c <= 7734)))))))
            : (c <= 7736 || (c < 7768
              ? (c < 7752
                ? (c < 7744
                  ? (c < 7740
                    ? c == 7738
                    : (c <= 7740 || c == 7742))
                  : (c <= 7744 || (c < 7748
                    ? c == 7746
                    : (c <= 7748 || c == 7750))))
                : (c <= 7752 || (c < 7760
                  ? (c < 7756
                    ? c == 7754
                    : (c <= 7756 || c == 7758))
                  : (c <= 7760 || (c < 7764
                    ? c == 7762
                    : (c <= 7764 || c == 7766))))))
              : (c <= 7768 || (c < 7784
                ? (c < 7776
                  ? (c < 7772
                    ? c == 7770
                    : (c <= 7772 || c == 7774))
                  : (c <= 7776 || (c < 7780
                    ? c == 7778
                    : (c <= 7780 || c == 7782))))
                : (c <= 7784 || (c < 7792
                  ? (c < 7788
                    ? c == 7786
                    : (c <= 7788 || c == 7790))
                  : (c <= 7792 || (c < 7796
                    ? c == 7794
                    : c <= 7796)))))))))
          : (c <= 7798 || (c < 7868
            ? (c < 7838
              ? (c < 7814
                ? (c < 7806
                  ? (c < 7802
                    ? c == 7800
                    : (c <= 7802 || c == 7804))
                  : (c <= 7806 || (c < 7810
                    ? c == 7808
                    : (c <= 7810 || c == 7812))))
                : (c <= 7814 || (c < 7822
                  ? (c < 7818
                    ? c == 7816
                    : (c <= 7818 || c == 7820))
                  : (c <= 7822 || (c < 7826
                    ? c == 7824
                    : (c <= 7826 || c == 7828))))))
              : (c <= 7838 || (c < 7854
                ? (c < 7846
                  ? (c < 7842
                    ? c == 7840
                    : (c <= 7842 || c == 7844))
                  : (c <= 7846 || (c < 7850
                    ? c == 7848
                    : (c <= 7850 || c == 7852))))
                : (c <= 7854 || (c < 7862
                  ? (c < 7858
                    ? c == 7856
                    : (c <= 7858 || c == 7860))
                  : (c <= 7862 || (c < 7866
                    ? c == 7864
                    : c <= 7866)))))))
            : (c <= 7868 || (c < 7900
              ? (c < 7884
                ? (c < 7876
                  ? (c < 7872
                    ? c == 7870
                    : (c <= 7872 || c == 7874))
                  : (c <= 7876 || (c < 7880
                    ? c == 7878
                    : (c <= 7880 || c == 7882))))
                : (c <= 7884 || (c < 7892
                  ? (c < 7888
                    ? c == 7886
                    : (c <= 7888 || c == 7890))
                  : (c <= 7892 || (c < 7896
                    ? c == 7894
                    : (c <= 7896 || c == 7898))))))
              : (c <= 7900 || (c < 7916
                ? (c < 7908
                  ? (c < 7904
                    ? c == 7902
                    : (c <= 7904 || c == 7906))
                  : (c <= 7908 || (c < 7912
                    ? c == 7910
                    : (c <= 7912 || c == 7914))))
                : (c <= 7916 || (c < 7924
                  ? (c < 7920
                    ? c == 7918
                    : (c <= 7920 || c == 7922))
                  : (c <= 7924 || (c < 7928
                    ? c == 7926
                    : c <= 7928)))))))))))
        : (c <= 7930 || (c < 11418
          ? (c < 8496
            ? (c < 8168
              ? (c < 8025
                ? (c < 7960
                  ? (c < 7934
                    ? c == 7932
                    : (c <= 7934 || (c >= 7944 && c <= 7951)))
                  : (c <= 7965 || (c < 7992
                    ? (c >= 7976 && c <= 7983)
                    : (c <= 7999 || (c >= 8008 && c <= 8013)))))
                : (c <= 8025 || (c < 8040
                  ? (c < 8029
                    ? c == 8027
                    : (c <= 8029 || c == 8031))
                  : (c <= 8047 || (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : (c <= 8139 || (c >= 8152 && c <= 8155)))))))
              : (c <= 8172 || (c < 8464
                ? (c < 8320
                  ? (c < 8304
                    ? (c >= 8184 && c <= 8187)
                    : (c <= 8304 || (c >= 8308 && c <= 8313)))
                  : (c <= 8329 || (c < 8455
                    ? c == 8450
                    : (c <= 8455 || (c >= 8459 && c <= 8461)))))
                : (c <= 8466 || (c < 8486
                  ? (c < 8473
                    ? c == 8469
                    : (c <= 8477 || c == 8484))
                  : (c <= 8486 || (c < 8490
                    ? c == 8488
                    : c <= 8493)))))))
            : (c <= 8499 || (c < 11378
              ? (c < 10102
                ? (c < 8528
                  ? (c < 8510
                    ? (c >= 8501 && c <= 8504)
                    : (c <= 8511 || c == 8517))
                  : (c <= 8579 || (c < 9312
                    ? (c >= 8581 && c <= 8585)
                    : (c <= 9371 || (c >= 9450 && c <= 9471)))))
                : (c <= 10131 || (c < 11367
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : (c <= 11360 || (c >= 11362 && c <= 11364)))
                  : (c <= 11367 || (c < 11371
                    ? c == 11369
                    : (c <= 11371 || (c >= 11373 && c <= 11376)))))))
              : (c <= 11378 || (c < 11404
                ? (c < 11396
                  ? (c < 11390
                    ? c == 11381
                    : (c <= 11392 || c == 11394))
                  : (c <= 11396 || (c < 11400
                    ? c == 11398
                    : (c <= 11400 || c == 11402))))
                : (c <= 11404 || (c < 11412
                  ? (c < 11408
                    ? c == 11406
                    : (c <= 11408 || c == 11410))
                  : (c <= 11412 || (c < 11416
                    ? c == 11414
                    : c <= 11416)))))))))
          : (c <= 11418 || (c < 11480
            ? (c < 11450
              ? (c < 11434
                ? (c < 11426
                  ? (c < 11422
                    ? c == 11420
                    : (c <= 11422 || c == 11424))
                  : (c <= 11426 || (c < 11430
                    ? c == 11428
                    : (c <= 11430 || c == 11432))))
                : (c <= 11434 || (c < 11442
                  ? (c < 11438
                    ? c == 11436
                    : (c <= 11438 || c == 11440))
                  : (c <= 11442 || (c < 11446
                    ? c == 11444
                    : (c <= 11446 || c == 11448))))))
              : (c <= 11450 || (c < 11466
                ? (c < 11458
                  ? (c < 11454
                    ? c == 11452
                    : (c <= 11454 || c == 11456))
                  : (c <= 11458 || (c < 11462
                    ? c == 11460
                    : (c <= 11462 || c == 11464))))
                : (c <= 11466 || (c < 11474
                  ? (c < 11470
                    ? c == 11468
                    : (c <= 11470 || c == 11472))
                  : (c <= 11474 || (c < 11478
                    ? c == 11476
                    : c <= 11478)))))))
            : (c <= 11480 || (c < 11704
              ? (c < 11506
                ? (c < 11488
                  ? (c < 11484
                    ? c == 11482
                    : (c <= 11484 || c == 11486))
                  : (c <= 11488 || (c < 11499
                    ? c == 11490
                    : (c <= 11499 || c == 11501))))
                : (c <= 11506 || (c < 11680
                  ? (c < 11568
                    ? c == 11517
                    : (c <= 11623 || (c >= 11648 && c <= 11670)))
                  : (c <= 11686 || (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)))))
              : (c <= 11710 || (c < 12348
                ? (c < 11736
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : (c <= 11726 || (c >= 11728 && c <= 11734)))
                  : (c <= 11742 || (c < 12321
                    ? (c >= 12294 && c <= 12295)
                    : (c <= 12329 || (c >= 12344 && c <= 12346)))))
                : (c <= 12348 || (c < 12543
                  ? (c < 12447
                    ? (c >= 12353 && c <= 12438)
                    : (c <= 12447 || (c >= 12449 && c <= 12538)))
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))))))))))))
      : (c <= 12693 || (c < 42948
        ? (c < 42802
          ? (c < 42590
            ? (c < 42560
              ? (c < 13312
                ? (c < 12872
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : (c <= 12799 || (c >= 12832 && c <= 12841)))
                  : (c <= 12879 || (c < 12928
                    ? (c >= 12881 && c <= 12895)
                    : (c <= 12937 || (c >= 12977 && c <= 12991)))))
                : (c <= 13312 || (c < 40982
                  ? (c < 19968
                    ? c == 19903
                    : (c <= 19968 || (c >= 40959 && c <= 40980)))
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42231)
                    : (c <= 42507 || (c >= 42512 && c <= 42539)))))))
              : (c <= 42560 || (c < 42576
                ? (c < 42568
                  ? (c < 42564
                    ? c == 42562
                    : (c <= 42564 || c == 42566))
                  : (c <= 42568 || (c < 42572
                    ? c == 42570
                    : (c <= 42572 || c == 42574))))
                : (c <= 42576 || (c < 42584
                  ? (c < 42580
                    ? c == 42578
                    : (c <= 42580 || c == 42582))
                  : (c <= 42584 || (c < 42588
                    ? c == 42586
                    : c <= 42588)))))))
            : (c <= 42590 || (c < 42638
              ? (c < 42606
                ? (c < 42598
                  ? (c < 42594
                    ? c == 42592
                    : (c <= 42594 || c == 42596))
                  : (c <= 42598 || (c < 42602
                    ? c == 42600
                    : (c <= 42602 || c == 42604))))
                : (c <= 42606 || (c < 42630
                  ? (c < 42626
                    ? c == 42624
                    : (c <= 42626 || c == 42628))
                  : (c <= 42630 || (c < 42634
                    ? c == 42632
                    : (c <= 42634 || c == 42636))))))
              : (c <= 42638 || (c < 42786
                ? (c < 42646
                  ? (c < 42642
                    ? c == 42640
                    : (c <= 42642 || c == 42644))
                  : (c <= 42646 || (c < 42650
                    ? c == 42648
                    : (c <= 42650 || (c >= 42656 && c <= 42735)))))
                : (c <= 42786 || (c < 42794
                  ? (c < 42790
                    ? c == 42788
                    : (c <= 42790 || c == 42792))
                  : (c <= 42794 || (c < 42798
                    ? c == 42796
                    : c <= 42798)))))))))
          : (c <= 42802 || (c < 42873
            ? (c < 42834
              ? (c < 42818
                ? (c < 42810
                  ? (c < 42806
                    ? c == 42804
                    : (c <= 42806 || c == 42808))
                  : (c <= 42810 || (c < 42814
                    ? c == 42812
                    : (c <= 42814 || c == 42816))))
                : (c <= 42818 || (c < 42826
                  ? (c < 42822
                    ? c == 42820
                    : (c <= 42822 || c == 42824))
                  : (c <= 42826 || (c < 42830
                    ? c == 42828
                    : (c <= 42830 || c == 42832))))))
              : (c <= 42834 || (c < 42850
                ? (c < 42842
                  ? (c < 42838
                    ? c == 42836
                    : (c <= 42838 || c == 42840))
                  : (c <= 42842 || (c < 42846
                    ? c == 42844
                    : (c <= 42846 || c == 42848))))
                : (c <= 42850 || (c < 42858
                  ? (c < 42854
                    ? c == 42852
                    : (c <= 42854 || c == 42856))
                  : (c <= 42858 || (c < 42862
                    ? c == 42860
                    : c <= 42862)))))))
            : (c <= 42873 || (c < 42910
              ? (c < 42893
                ? (c < 42882
                  ? (c < 42877
                    ? c == 42875
                    : (c <= 42878 || c == 42880))
                  : (c <= 42882 || (c < 42886
                    ? c == 42884
                    : (c <= 42886 || c == 42891))))
                : (c <= 42893 || (c < 42904
                  ? (c < 42898
                    ? (c >= 42895 && c <= 42896)
                    : (c <= 42898 || c == 42902))
                  : (c <= 42904 || (c < 42908
                    ? c == 42906
                    : c <= 42908)))))
              : (c <= 42910 || (c < 42934
                ? (c < 42918
                  ? (c < 42914
                    ? c == 42912
                    : (c <= 42914 || c == 42916))
                  : (c <= 42918 || (c < 42922
                    ? c == 42920
                    : (c <= 42926 || (c >= 42928 && c <= 42932)))))
                : (c <= 42934 || (c < 42942
                  ? (c < 42938
                    ? c == 42936
                    : (c <= 42938 || c == 42940))
                  : (c <= 42942 || (c < 42946
                    ? c == 42944
                    : c <= 42946)))))))))))
        : (c <= 42951 || (c < 64467
          ? (c < 43642
            ? (c < 43259
              ? (c < 43011
                ? (c < 42968
                  ? (c < 42960
                    ? c == 42953
                    : (c <= 42960 || c == 42966))
                  : (c <= 42968 || (c < 42999
                    ? c == 42997
                    : (c <= 42999 || (c >= 43003 && c <= 43009)))))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : (c <= 43042 || (c >= 43056 && c <= 43061)))
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43138 && c <= 43187)
                    : (c <= 43225 || (c >= 43250 && c <= 43255)))))))
              : (c <= 43259 || (c < 43495
                ? (c < 43360
                  ? (c < 43264
                    ? (c >= 43261 && c <= 43262)
                    : (c <= 43301 || (c >= 43312 && c <= 43334)))
                  : (c <= 43388 || (c < 43472
                    ? (c >= 43396 && c <= 43442)
                    : (c <= 43481 || (c >= 43488 && c <= 43492)))))
                : (c <= 43518 || (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : (c <= 43586 || (c >= 43588 && c <= 43595)))
                  : (c <= 43609 || (c < 43633
                    ? (c >= 43616 && c <= 43631)
                    : c <= 43638)))))))
            : (c <= 43642 || (c < 44016
              ? (c < 43744
                ? (c < 43705
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : (c <= 43697 || (c >= 43701 && c <= 43702)))
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : (c <= 43714 || (c >= 43739 && c <= 43740)))))
                : (c <= 43754 || (c < 43793
                  ? (c < 43777
                    ? c == 43762
                    : (c <= 43782 || (c >= 43785 && c <= 43790)))
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : (c <= 43822 || (c >= 43968 && c <= 44002)))))))
              : (c <= 44025 || (c < 64287
                ? (c < 55243
                  ? (c < 55203
                    ? c == 44032
                    : (c <= 55203 || (c >= 55216 && c <= 55238)))
                  : (c <= 55291 || (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : (c <= 64217 || c == 64285))))
                : (c <= 64296 || (c < 64320
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : (c <= 64316 || c == 64318))
                  : (c <= 64321 || (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)))))))))
          : (c <= 64829 || (c < 66432
            ? (c < 65549
              ? (c < 65382
                ? (c < 65136
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : (c <= 64967 || (c >= 65008 && c <= 65019)))
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : (c <= 65305 || (c >= 65313 && c <= 65338)))))
                : (c <= 65391 || (c < 65482
                  ? (c < 65440
                    ? (c >= 65393 && c <= 65437)
                    : (c <= 65470 || (c >= 65474 && c <= 65479)))
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : (c <= 65500 || (c >= 65536 && c <= 65547)))))))
              : (c <= 65574 || (c < 65930
                ? (c < 65616
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : (c <= 65597 || (c >= 65599 && c <= 65613)))
                  : (c <= 65629 || (c < 65799
                    ? (c >= 65664 && c <= 65786)
                    : (c <= 65843 || (c >= 65856 && c <= 65912)))))
                : (c <= 65931 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : (c <= 66256 || (c >= 66273 && c <= 66299)))
                  : (c <= 66339 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)))))))
            : (c <= 66461 || (c < 67392
              ? (c < 66816
                ? (c < 66560
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : (c <= 66511 || (c >= 66513 && c <= 66517)))
                  : (c <= 66599 || (c < 66720
                    ? (c >= 66640 && c <= 66717)
                    : (c <= 66729 || (c >= 66736 && c <= 66771)))))
                : (c <= 66855 || (c < 66956
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : (c <= 66938 || (c >= 66940 && c <= 66954)))
                  : (c <= 66962 || (c < 67072
                    ? (c >= 66964 && c <= 66965)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67672
                ? (c < 67594
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : (c <= 67589 || c == 67592))
                  : (c <= 67637 || (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : (c <= 67644 || (c >= 67647 && c <= 67669)))))
                : (c <= 67702 || (c < 67828
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : (c <= 67759 || (c >= 67808 && c <= 67826)))
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67835 && c <= 67867)
                    : c <= 67883)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (sym__accounttype_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (sym__accounttype_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('!' <= lookahead && lookahead <= '#') ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (sym__accounttype_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '^') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (sym__accounttype_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym__accountname_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      END_STATE();
    case 19:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 21:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 22:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_flag_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_flag_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_flag_token2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_none);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'L') ADVANCE(57);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'L') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(55);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (sym__accounttype_character_set_3(lookahead)) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_currency_token1);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_currency_token2);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__accounttype);
      if (sym__accounttype_character_set_4(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__accountname);
      if (sym__accounttype_character_set_4(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(72);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_keyword);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_txn);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 89:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 3, .external_lex_state = 3},
  [5] = {.lex_state = 3, .external_lex_state = 4},
  [6] = {.lex_state = 3, .external_lex_state = 5},
  [7] = {.lex_state = 3, .external_lex_state = 5},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3, .external_lex_state = 5},
  [10] = {.lex_state = 3, .external_lex_state = 5},
  [11] = {.lex_state = 3, .external_lex_state = 5},
  [12] = {.lex_state = 3, .external_lex_state = 5},
  [13] = {.lex_state = 3, .external_lex_state = 5},
  [14] = {.lex_state = 3, .external_lex_state = 5},
  [15] = {.lex_state = 3, .external_lex_state = 5},
  [16] = {.lex_state = 3, .external_lex_state = 5},
  [17] = {.lex_state = 4, .external_lex_state = 4},
  [18] = {.lex_state = 4, .external_lex_state = 4},
  [19] = {.lex_state = 3, .external_lex_state = 5},
  [20] = {.lex_state = 4, .external_lex_state = 4},
  [21] = {.lex_state = 3, .external_lex_state = 5},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 3, .external_lex_state = 5},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 6},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 0, .external_lex_state = 6},
  [28] = {.lex_state = 0, .external_lex_state = 6},
  [29] = {.lex_state = 0, .external_lex_state = 6},
  [30] = {.lex_state = 0, .external_lex_state = 6},
  [31] = {.lex_state = 0, .external_lex_state = 6},
  [32] = {.lex_state = 0, .external_lex_state = 6},
  [33] = {.lex_state = 0, .external_lex_state = 6},
  [34] = {.lex_state = 0, .external_lex_state = 6},
  [35] = {.lex_state = 0, .external_lex_state = 6},
  [36] = {.lex_state = 0, .external_lex_state = 6},
  [37] = {.lex_state = 0, .external_lex_state = 6},
  [38] = {.lex_state = 0, .external_lex_state = 6},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 0, .external_lex_state = 6},
  [41] = {.lex_state = 0, .external_lex_state = 6},
  [42] = {.lex_state = 0, .external_lex_state = 6},
  [43] = {.lex_state = 0, .external_lex_state = 6},
  [44] = {.lex_state = 0, .external_lex_state = 6},
  [45] = {.lex_state = 0, .external_lex_state = 6},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 0, .external_lex_state = 6},
  [48] = {.lex_state = 0, .external_lex_state = 6},
  [49] = {.lex_state = 0, .external_lex_state = 6},
  [50] = {.lex_state = 0, .external_lex_state = 6},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 0, .external_lex_state = 6},
  [53] = {.lex_state = 0, .external_lex_state = 6},
  [54] = {.lex_state = 8, .external_lex_state = 3},
  [55] = {.lex_state = 4, .external_lex_state = 4},
  [56] = {.lex_state = 0, .external_lex_state = 6},
  [57] = {.lex_state = 8, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 6},
  [59] = {.lex_state = 8, .external_lex_state = 3},
  [60] = {.lex_state = 8, .external_lex_state = 3},
  [61] = {.lex_state = 4, .external_lex_state = 4},
  [62] = {.lex_state = 8, .external_lex_state = 3},
  [63] = {.lex_state = 8, .external_lex_state = 3},
  [64] = {.lex_state = 8, .external_lex_state = 3},
  [65] = {.lex_state = 8, .external_lex_state = 3},
  [66] = {.lex_state = 8, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 6},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 6},
  [70] = {.lex_state = 8, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 6},
  [72] = {.lex_state = 0, .external_lex_state = 6},
  [73] = {.lex_state = 8, .external_lex_state = 3},
  [74] = {.lex_state = 8, .external_lex_state = 3},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 3, .external_lex_state = 4},
  [135] = {.lex_state = 8, .external_lex_state = 3},
  [136] = {.lex_state = 4, .external_lex_state = 3},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5, .external_lex_state = 3},
  [139] = {.lex_state = 4, .external_lex_state = 4},
  [140] = {.lex_state = 3, .external_lex_state = 4},
  [141] = {.lex_state = 4, .external_lex_state = 4},
  [142] = {.lex_state = 5, .external_lex_state = 3},
  [143] = {.lex_state = 5, .external_lex_state = 3},
  [144] = {.lex_state = 5, .external_lex_state = 3},
  [145] = {.lex_state = 4, .external_lex_state = 3},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 5, .external_lex_state = 3},
  [148] = {.lex_state = 5, .external_lex_state = 3},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 5, .external_lex_state = 3},
  [151] = {.lex_state = 5, .external_lex_state = 3},
  [152] = {.lex_state = 4, .external_lex_state = 3},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 4, .external_lex_state = 3},
  [156] = {.lex_state = 5, .external_lex_state = 3},
  [157] = {.lex_state = 5, .external_lex_state = 3},
  [158] = {.lex_state = 4, .external_lex_state = 3},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 8, .external_lex_state = 3},
  [166] = {.lex_state = 3, .external_lex_state = 4},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4, .external_lex_state = 4},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 4, .external_lex_state = 4},
  [173] = {.lex_state = 4, .external_lex_state = 4},
  [174] = {.lex_state = 4, .external_lex_state = 4},
  [175] = {.lex_state = 3, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 3, .external_lex_state = 3},
  [180] = {.lex_state = 3, .external_lex_state = 3},
  [181] = {.lex_state = 3, .external_lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 3, .external_lex_state = 4},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 3, .external_lex_state = 4},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 5, .external_lex_state = 7},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 5, .external_lex_state = 7},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 3, .external_lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 5, .external_lex_state = 7},
  [205] = {.lex_state = 5, .external_lex_state = 7},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 3, .external_lex_state = 4},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 5, .external_lex_state = 7},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 3, .external_lex_state = 4},
  [222] = {.lex_state = 3, .external_lex_state = 4},
  [223] = {.lex_state = 3, .external_lex_state = 4},
  [224] = {.lex_state = 3, .external_lex_state = 4},
  [225] = {.lex_state = 3, .external_lex_state = 4},
  [226] = {.lex_state = 3, .external_lex_state = 4},
  [227] = {.lex_state = 3, .external_lex_state = 3},
  [228] = {.lex_state = 3, .external_lex_state = 4},
  [229] = {.lex_state = 3, .external_lex_state = 4},
  [230] = {.lex_state = 3, .external_lex_state = 4},
  [231] = {.lex_state = 3, .external_lex_state = 3},
  [232] = {.lex_state = 3, .external_lex_state = 4},
  [233] = {.lex_state = 3, .external_lex_state = 4},
  [234] = {.lex_state = 3, .external_lex_state = 4},
  [235] = {.lex_state = 3, .external_lex_state = 4},
  [236] = {.lex_state = 3, .external_lex_state = 3},
  [237] = {.lex_state = 3, .external_lex_state = 4},
  [238] = {.lex_state = 0, .external_lex_state = 4},
  [239] = {.lex_state = 5, .external_lex_state = 3},
  [240] = {.lex_state = 3, .external_lex_state = 3},
  [241] = {.lex_state = 3, .external_lex_state = 4},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 3, .external_lex_state = 4},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 3, .external_lex_state = 4},
  [246] = {.lex_state = 3, .external_lex_state = 4},
  [247] = {.lex_state = 3, .external_lex_state = 4},
  [248] = {.lex_state = 3, .external_lex_state = 4},
  [249] = {.lex_state = 3, .external_lex_state = 4},
  [250] = {.lex_state = 3, .external_lex_state = 3},
  [251] = {.lex_state = 3, .external_lex_state = 4},
  [252] = {.lex_state = 3, .external_lex_state = 4},
  [253] = {.lex_state = 3, .external_lex_state = 4},
  [254] = {.lex_state = 3, .external_lex_state = 4},
  [255] = {.lex_state = 3, .external_lex_state = 4},
  [256] = {.lex_state = 3, .external_lex_state = 4},
  [257] = {.lex_state = 5, .external_lex_state = 3},
  [258] = {.lex_state = 3, .external_lex_state = 3},
  [259] = {.lex_state = 3, .external_lex_state = 3},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0, .external_lex_state = 4},
  [262] = {.lex_state = 3, .external_lex_state = 3},
  [263] = {.lex_state = 3, .external_lex_state = 4},
  [264] = {.lex_state = 3, .external_lex_state = 4},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 3, .external_lex_state = 4},
  [267] = {.lex_state = 3, .external_lex_state = 4},
  [268] = {.lex_state = 5, .external_lex_state = 3},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 3, .external_lex_state = 3},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 3, .external_lex_state = 4},
  [273] = {.lex_state = 5, .external_lex_state = 3},
  [274] = {.lex_state = 3, .external_lex_state = 3},
  [275] = {.lex_state = 3, .external_lex_state = 3},
  [276] = {.lex_state = 5, .external_lex_state = 3},
  [277] = {.lex_state = 3, .external_lex_state = 3},
  [278] = {.lex_state = 3, .external_lex_state = 3},
  [279] = {.lex_state = 5, .external_lex_state = 3},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 3, .external_lex_state = 3},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 0, .external_lex_state = 4},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 3, .external_lex_state = 3},
  [293] = {.lex_state = 3, .external_lex_state = 3},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 3, .external_lex_state = 3},
  [301] = {.lex_state = 3, .external_lex_state = 3},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0, .external_lex_state = 4},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 0, .external_lex_state = 4},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 3, .external_lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0, .external_lex_state = 4},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 3},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0, .external_lex_state = 4},
  [320] = {.lex_state = 9},
  [321] = {.lex_state = 3},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 0, .external_lex_state = 4},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0, .external_lex_state = 4},
  [327] = {.lex_state = 0, .external_lex_state = 4},
  [328] = {.lex_state = 0, .external_lex_state = 4},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 0, .external_lex_state = 4},
  [331] = {.lex_state = 0, .external_lex_state = 4},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0, .external_lex_state = 4},
  [334] = {.lex_state = 0, .external_lex_state = 4},
  [335] = {.lex_state = 0, .external_lex_state = 4},
  [336] = {.lex_state = 0, .external_lex_state = 4},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 0, .external_lex_state = 4},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0, .external_lex_state = 4},
  [347] = {.lex_state = 0, .external_lex_state = 4},
  [348] = {.lex_state = 9},
  [349] = {.lex_state = 0, .external_lex_state = 4},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0, .external_lex_state = 4},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
  ts_external_token__header = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__header] = sym__header,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token__header] = true,
  },
  [2] = {
    [ts_external_token__header] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
    [ts_external_token__header] = true,
  },
  [7] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_pushmeta] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_popmeta] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_txn] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_flag_token1] = ACTIONS(1),
    [aux_sym_flag_token2] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [aux_sym_currency_token1] = ACTIONS(1),
    [aux_sym_currency_token2] = ACTIONS(1),
    [sym__accounttype] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__header] = ACTIONS(1),
  },
  [1] = {
    [sym_ledger] = STATE(312),
    [sym__declarations] = STATE(3),
    [sym__pragma] = STATE(3),
    [sym_pushtag] = STATE(79),
    [sym_poptag] = STATE(79),
    [sym_pushmeta] = STATE(79),
    [sym_popmeta] = STATE(79),
    [sym_option] = STATE(79),
    [sym_include] = STATE(79),
    [sym_plugin] = STATE(79),
    [sym__directive] = STATE(3),
    [sym_transaction] = STATE(133),
    [sym_price] = STATE(133),
    [sym_balance] = STATE(133),
    [sym_open] = STATE(133),
    [sym_close] = STATE(133),
    [sym_commodity] = STATE(133),
    [sym_pad] = STATE(133),
    [sym_document] = STATE(133),
    [sym_note] = STATE(133),
    [sym_event] = STATE(133),
    [sym_query] = STATE(133),
    [sym_custom] = STATE(133),
    [sym_header] = STATE(3),
    [aux_sym_ledger_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pushtag] = ACTIONS(7),
    [anon_sym_poptag] = ACTIONS(9),
    [anon_sym_pushmeta] = ACTIONS(11),
    [anon_sym_popmeta] = ACTIONS(13),
    [anon_sym_option] = ACTIONS(15),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_plugin] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_AT_AT] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_date] = ACTIONS(25),
    [sym__header] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_pushtag,
    ACTIONS(34), 1,
      anon_sym_poptag,
    ACTIONS(37), 1,
      anon_sym_pushmeta,
    ACTIONS(40), 1,
      anon_sym_popmeta,
    ACTIONS(43), 1,
      anon_sym_option,
    ACTIONS(46), 1,
      anon_sym_include,
    ACTIONS(49), 1,
      anon_sym_plugin,
    ACTIONS(52), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_AT_AT,
    ACTIONS(58), 1,
      sym_date,
    ACTIONS(61), 1,
      sym__header,
    STATE(2), 5,
      sym__declarations,
      sym__pragma,
      sym__directive,
      sym_header,
      aux_sym_ledger_repeat1,
    STATE(79), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(133), 12,
      sym_transaction,
      sym_price,
      sym_balance,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_document,
      sym_note,
      sym_event,
      sym_query,
      sym_custom,
  [70] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_pushtag,
    ACTIONS(9), 1,
      anon_sym_poptag,
    ACTIONS(11), 1,
      anon_sym_pushmeta,
    ACTIONS(13), 1,
      anon_sym_popmeta,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(19), 1,
      anon_sym_plugin,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_AT_AT,
    ACTIONS(25), 1,
      sym_date,
    ACTIONS(27), 1,
      sym__header,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(2), 5,
      sym__declarations,
      sym__pragma,
      sym__directive,
      sym_header,
      aux_sym_ledger_repeat1,
    STATE(79), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(133), 12,
      sym_transaction,
      sym_price,
      sym_balance,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_document,
      sym_note,
      sym_event,
      sym_query,
      sym_custom,
  [140] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      sym_none,
    ACTIONS(76), 1,
      aux_sym_currency_token1,
    ACTIONS(78), 1,
      aux_sym_currency_token2,
    ACTIONS(80), 1,
      sym__accounttype,
    ACTIONS(82), 1,
      sym_number,
    STATE(136), 1,
      sym__expr,
    STATE(292), 1,
      sym_value,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(84), 2,
      sym__dedent,
      sym_key,
    ACTIONS(70), 4,
      sym_date,
      sym_string,
      sym_tag,
      sym_link,
    STATE(293), 5,
      sym__simple_value,
      sym_amount,
      sym_bool,
      sym_currency,
      sym_account,
  [193] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym__newline,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      sym_none,
    ACTIONS(96), 1,
      aux_sym_currency_token1,
    ACTIONS(98), 1,
      aux_sym_currency_token2,
    ACTIONS(100), 1,
      sym__accounttype,
    ACTIONS(102), 1,
      sym_number,
    STATE(141), 1,
      sym__expr,
    STATE(334), 1,
      sym_value,
    ACTIONS(86), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(92), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(90), 4,
      sym_date,
      sym_string,
      sym_tag,
      sym_link,
    STATE(324), 5,
      sym__simple_value,
      sym_amount,
      sym_bool,
      sym_currency,
      sym_account,
  [245] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym_none,
    ACTIONS(114), 1,
      aux_sym_currency_token1,
    ACTIONS(116), 1,
      aux_sym_currency_token2,
    ACTIONS(118), 1,
      sym__accounttype,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      sym__indent,
    STATE(16), 1,
      sym__expr,
    STATE(103), 1,
      sym__metadata,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(110), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(108), 4,
      sym_date,
      sym_string,
      sym_tag,
      sym_link,
    STATE(7), 5,
      sym__simple_value,
      sym_bool,
      sym_currency,
      sym_account,
      aux_sym_custom_repeat1,
  [297] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_currency_token1,
    ACTIONS(116), 1,
      aux_sym_currency_token2,
    ACTIONS(118), 1,
      sym__accounttype,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(126), 1,
      sym_none,
    STATE(16), 1,
      sym__expr,
    STATE(125), 1,
      sym__metadata,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(110), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(124), 4,
      sym_date,
      sym_string,
      sym_tag,
      sym_link,
    STATE(9), 5,
      sym__simple_value,
      sym_bool,
      sym_currency,
      sym_account,
      aux_sym_custom_repeat1,
  [349] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      sym_none,
    ACTIONS(96), 1,
      aux_sym_currency_token1,
    ACTIONS(98), 1,
      aux_sym_currency_token2,
    ACTIONS(100), 1,
      sym__accounttype,
    ACTIONS(102), 1,
      sym_number,
    STATE(141), 1,
      sym__expr,
    STATE(319), 1,
      sym_value,
    ACTIONS(86), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(92), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(90), 4,
      sym_date,
      sym_string,
      sym_tag,
      sym_link,
    STATE(324), 5,
      sym__simple_value,
      sym_amount,
      sym_bool,
      sym_currency,
      sym_account,
  [398] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      sym_none,
    ACTIONS(143), 1,
      aux_sym_currency_token1,
    ACTIONS(146), 1,
      aux_sym_currency_token2,
    ACTIONS(149), 1,
      sym__accounttype,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(155), 1,
      sym__indent,
    STATE(16), 1,
      sym__expr,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(134), 4,
      sym_date,
      sym_string,
      sym_tag,
      sym_link,
    STATE(9), 5,
      sym__simple_value,
      sym_bool,
      sym_currency,
      sym_account,
      aux_sym_custom_repeat1,
  [447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_SLASH,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(157), 10,
      sym__indent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(159), 6,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(157), 9,
      sym__indent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_SLASH,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(157), 10,
      sym__indent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 7,
      anon_sym_SLASH,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(165), 10,
      sym__indent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COLON,
    STATE(14), 1,
      aux_sym_account_repeat1,
    ACTIONS(174), 6,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(172), 9,
      sym__indent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COLON,
    STATE(14), 1,
      aux_sym_account_repeat1,
    ACTIONS(180), 6,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(178), 9,
      sym__indent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [609] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 6,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(184), 7,
      sym__indent,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COLON,
    STATE(17), 1,
      aux_sym_account_repeat1,
    ACTIONS(174), 2,
      anon_sym_AT,
      anon_sym_LBRACE,
    ACTIONS(172), 12,
      sym__newline,
      anon_sym_AT_AT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACE_LBRACE,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
      sym_string,
      sym_number,
      sym_tag,
      sym_link,
  [668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COLON,
    STATE(17), 1,
      aux_sym_account_repeat1,
    ACTIONS(180), 2,
      anon_sym_AT,
      anon_sym_LBRACE,
    ACTIONS(178), 12,
      sym__newline,
      anon_sym_AT_AT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACE_LBRACE,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
      sym_string,
      sym_number,
      sym_tag,
      sym_link,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 6,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(172), 10,
      sym__indent,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_AT,
      anon_sym_LBRACE,
    ACTIONS(172), 13,
      sym__newline,
      anon_sym_COLON,
      anon_sym_AT_AT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACE_LBRACE,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
      sym_string,
      sym_number,
      sym_tag,
      sym_link,
  [743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 6,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(193), 9,
      sym__indent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [766] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(211), 1,
      sym_number,
    STATE(149), 1,
      sym__expr,
    STATE(329), 1,
      sym__cost,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      sym_date,
      sym_string,
    ACTIONS(209), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    STATE(260), 2,
      sym__compound_amount,
      sym_currency,
  [807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_none,
      aux_sym_currency_token1,
      sym__accounttype,
      sym_number,
    ACTIONS(213), 9,
      sym__indent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_date,
      aux_sym_currency_token2,
      sym_string,
      sym_tag,
      sym_link,
  [830] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      sym_number,
    STATE(149), 1,
      sym__expr,
    STATE(342), 1,
      sym__cost,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      sym_date,
      sym_string,
    ACTIONS(209), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    STATE(260), 2,
      sym__compound_amount,
      sym_currency,
  [871] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(219), 1,
      anon_sym_AT,
    STATE(91), 1,
      sym__metadata,
    ACTIONS(217), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [897] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_txn,
    ACTIONS(223), 1,
      anon_sym_balance,
    ACTIONS(225), 1,
      anon_sym_open,
    ACTIONS(227), 1,
      anon_sym_close,
    ACTIONS(229), 1,
      anon_sym_commodity,
    ACTIONS(231), 1,
      anon_sym_pad,
    ACTIONS(233), 1,
      anon_sym_document,
    ACTIONS(235), 1,
      anon_sym_note,
    ACTIONS(237), 1,
      anon_sym_event,
    ACTIONS(239), 1,
      anon_sym_query,
    ACTIONS(241), 1,
      anon_sym_custom,
    STATE(199), 1,
      sym_flag,
    ACTIONS(243), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
  [941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(247), 1,
      anon_sym_AT,
    STATE(92), 1,
      sym__metadata,
    ACTIONS(245), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(251), 1,
      anon_sym_AT,
    STATE(96), 1,
      sym__metadata,
    ACTIONS(249), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(255), 1,
      anon_sym_AT,
    STATE(130), 1,
      sym__metadata,
    ACTIONS(253), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(259), 1,
      anon_sym_AT,
    STATE(98), 1,
      sym__metadata,
    ACTIONS(257), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(263), 1,
      anon_sym_AT,
    STATE(101), 1,
      sym__metadata,
    ACTIONS(261), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1071] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(126), 1,
      sym__metadata,
    ACTIONS(265), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(271), 1,
      anon_sym_AT,
    STATE(108), 1,
      sym__metadata,
    ACTIONS(269), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(275), 1,
      anon_sym_AT,
    STATE(81), 1,
      sym__metadata,
    ACTIONS(273), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(279), 1,
      anon_sym_AT,
    STATE(124), 1,
      sym__metadata,
    ACTIONS(277), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(283), 1,
      anon_sym_AT,
    STATE(111), 1,
      sym__metadata,
    ACTIONS(281), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(287), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym__metadata,
    ACTIONS(285), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(291), 1,
      anon_sym_AT,
    STATE(100), 1,
      sym__metadata,
    ACTIONS(289), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(295), 1,
      anon_sym_AT,
    STATE(82), 1,
      sym__metadata,
    ACTIONS(293), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(299), 1,
      anon_sym_AT,
    STATE(102), 1,
      sym__metadata,
    ACTIONS(297), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(303), 1,
      anon_sym_AT,
    STATE(123), 1,
      sym__metadata,
    ACTIONS(301), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(307), 1,
      anon_sym_AT,
    STATE(95), 1,
      sym__metadata,
    ACTIONS(305), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym__metadata,
    ACTIONS(309), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1383] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(315), 1,
      anon_sym_AT,
    STATE(94), 1,
      sym__metadata,
    ACTIONS(313), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(319), 1,
      anon_sym_AT,
    STATE(129), 1,
      sym__metadata,
    ACTIONS(317), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym__metadata,
    ACTIONS(321), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(327), 1,
      anon_sym_AT,
    STATE(85), 1,
      sym__metadata,
    ACTIONS(325), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(331), 1,
      anon_sym_AT,
    STATE(75), 1,
      sym__metadata,
    ACTIONS(329), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(335), 1,
      anon_sym_AT,
    STATE(93), 1,
      sym__metadata,
    ACTIONS(333), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(339), 1,
      anon_sym_AT,
    STATE(83), 1,
      sym__metadata,
    ACTIONS(337), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(343), 1,
      anon_sym_AT,
    STATE(131), 1,
      sym__metadata,
    ACTIONS(341), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(347), 1,
      anon_sym_AT,
    STATE(119), 1,
      sym__metadata,
    ACTIONS(345), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(351), 1,
      anon_sym_AT,
    STATE(118), 1,
      sym__metadata,
    ACTIONS(349), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1643] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(363), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(62), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(144), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [1682] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_AT_AT,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(373), 1,
      sym_number,
    ACTIONS(375), 1,
      sym__newline,
    STATE(160), 1,
      sym_amount,
    STATE(164), 1,
      sym__expr,
    STATE(271), 1,
      sym_cost,
    STATE(335), 1,
      sym_price,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      sym__indent,
    ACTIONS(377), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1746] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(383), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(135), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(142), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [1785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_AT,
    ACTIONS(389), 1,
      sym__indent,
    ACTIONS(385), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [1808] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(391), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(64), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(143), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [1847] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(363), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(135), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(144), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [1886] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_AT_AT,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(373), 1,
      sym_number,
    ACTIONS(393), 1,
      sym__newline,
    STATE(164), 1,
      sym__expr,
    STATE(176), 1,
      sym_amount,
    STATE(261), 1,
      sym_cost,
    STATE(336), 1,
      sym_price,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1927] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(395), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(135), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(151), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [1966] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(397), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(70), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(148), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [2005] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(397), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(135), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(148), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [2044] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(399), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(135), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(157), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [2083] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(401), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym_transaction_repeat1,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(150), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [2122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      sym__indent,
    ACTIONS(403), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2145] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_number,
    ACTIONS(409), 1,
      anon_sym_STAR,
    STATE(149), 1,
      sym__expr,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(209), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    ACTIONS(411), 2,
      sym_date,
      sym_string,
    STATE(290), 2,
      sym__compound_amount,
      sym_currency,
  [2180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_AT,
    ACTIONS(417), 1,
      sym__indent,
    ACTIONS(413), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2203] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(419), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(135), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(147), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [2242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_AT,
    ACTIONS(425), 1,
      sym__indent,
    ACTIONS(421), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_AT,
    ACTIONS(431), 1,
      sym__indent,
    ACTIONS(427), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2288] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(433), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(65), 1,
      aux_sym_transaction_repeat1,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(138), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [2327] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_flag_token1,
    ACTIONS(355), 1,
      aux_sym_flag_token2,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(399), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym_transaction_repeat1,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
    STATE(157), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_AT,
    ACTIONS(435), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(439), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_AT,
    ACTIONS(443), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_AT,
    ACTIONS(297), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_AT,
    ACTIONS(447), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_AT,
    ACTIONS(451), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_AT,
    ACTIONS(269), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_AT,
    ACTIONS(261), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(281), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_AT,
    ACTIONS(455), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(289), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_AT,
    ACTIONS(459), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_AT,
    ACTIONS(463), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_AT,
    ACTIONS(467), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_AT,
    ACTIONS(471), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_AT,
    ACTIONS(475), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_AT,
    ACTIONS(479), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_AT,
    ACTIONS(305), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_AT,
    ACTIONS(483), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_AT,
    ACTIONS(329), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_AT,
    ACTIONS(345), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_AT,
    ACTIONS(333), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(487), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_AT,
    ACTIONS(217), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(213), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_AT,
    ACTIONS(491), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_AT,
    ACTIONS(495), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_AT,
    ACTIONS(499), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_AT,
    ACTIONS(503), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(507), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_AT,
    ACTIONS(511), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [2986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_AT,
    ACTIONS(515), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_AT,
    ACTIONS(519), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_AT,
    ACTIONS(523), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_AT,
    ACTIONS(527), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_AT,
    ACTIONS(531), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_AT,
    ACTIONS(535), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_AT,
    ACTIONS(539), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_AT,
    ACTIONS(543), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_AT,
    ACTIONS(547), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_AT,
    ACTIONS(551), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_AT,
    ACTIONS(555), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_AT,
    ACTIONS(559), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_AT,
    ACTIONS(265), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_AT,
    ACTIONS(563), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_AT,
    ACTIONS(567), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_AT,
    ACTIONS(571), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_AT,
    ACTIONS(575), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(245), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_AT,
    ACTIONS(253), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_AT,
    ACTIONS(579), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_AT,
    ACTIONS(583), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_AT,
    ACTIONS(587), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_AT,
    ACTIONS(591), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_AT,
    ACTIONS(309), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_AT,
    ACTIONS(595), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(321), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_AT,
    ACTIONS(599), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_AT,
    ACTIONS(603), 11,
      sym__header,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_AT_AT,
      sym_date,
  [3546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_AT,
      anon_sym_LBRACE,
    ACTIONS(213), 8,
      sym__newline,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
      sym_string,
      sym_tag,
      sym_link,
  [3564] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      aux_sym_flag_token1,
    ACTIONS(614), 1,
      sym_key,
    STATE(135), 1,
      aux_sym_transaction_repeat1,
    STATE(331), 1,
      sym_meta,
    ACTIONS(611), 2,
      sym_tag,
      sym_link,
    ACTIONS(609), 3,
      sym__dedent,
      aux_sym_flag_token2,
      sym__accounttype,
  [3589] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    STATE(300), 1,
      sym_currency,
    ACTIONS(78), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    ACTIONS(184), 2,
      sym__dedent,
      sym_key,
    ACTIONS(617), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_COLON,
    STATE(154), 1,
      aux_sym_account_repeat1,
    ACTIONS(178), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym__accounttype,
      sym_string,
      sym_number,
  [3632] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(399), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [3656] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_string,
    ACTIONS(629), 1,
      sym__newline,
    STATE(175), 1,
      sym_currency,
    STATE(251), 1,
      aux_sym__tags_links,
    ACTIONS(98), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    ACTIONS(627), 2,
      sym_tag,
      sym_link,
  [3680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_AT,
      anon_sym_LBRACE,
    ACTIONS(487), 6,
      sym__newline,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_LBRACE_LBRACE,
      sym_tag,
      sym_link,
  [3696] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym__newline,
    ACTIONS(633), 1,
      anon_sym_STAR,
    ACTIONS(635), 1,
      anon_sym_SLASH,
    STATE(140), 1,
      sym_currency,
    ACTIONS(98), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    ACTIONS(631), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3720] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(637), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [3744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(397), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [3768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(395), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [3792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(165), 7,
      sym__dedent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
      sym_key,
  [3808] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(639), 1,
      sym_number,
    STATE(162), 1,
      sym__expr,
    STATE(289), 1,
      sym_currency,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(209), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [3832] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(641), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [3856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(419), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [3880] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    ACTIONS(649), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym_currency,
    ACTIONS(209), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    ACTIONS(643), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3904] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(363), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [3928] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(651), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(157), 7,
      sym__dedent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
      sym_key,
  [3968] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(653), 1,
      sym_number,
    STATE(161), 1,
      sym__expr,
    STATE(280), 1,
      sym_currency,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(209), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [3992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COLON,
    STATE(154), 1,
      aux_sym_account_repeat1,
    ACTIONS(172), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym__accounttype,
      sym_string,
      sym_number,
  [4010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(157), 6,
      sym__dedent,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
      sym_key,
  [4028] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__accounttype,
    ACTIONS(664), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(658), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [4052] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    ACTIONS(383), 1,
      sym__dedent,
    STATE(61), 1,
      sym_account,
    STATE(296), 1,
      sym_flag,
    ACTIONS(355), 2,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
    STATE(156), 2,
      sym_posting,
      aux_sym_transaction_repeat2,
  [4076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(157), 7,
      sym__dedent,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
      sym_key,
  [4092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(165), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4107] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_AT_AT,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(666), 1,
      sym__newline,
    STATE(238), 1,
      sym_cost,
    STATE(347), 1,
      sym_price,
  [4132] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    STATE(289), 1,
      sym_currency,
    ACTIONS(209), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    ACTIONS(643), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    STATE(283), 1,
      sym_currency,
    ACTIONS(209), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    ACTIONS(643), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 7,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym__accounttype,
      sym_string,
      sym_number,
  [4187] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    STATE(140), 1,
      sym_currency,
    ACTIONS(98), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
    ACTIONS(643), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      aux_sym_flag_token1,
    ACTIONS(609), 6,
      sym__dedent,
      aux_sym_flag_token2,
      sym__accounttype,
      sym_tag,
      sym_link,
      sym_key,
  [4223] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      sym_string,
    ACTIONS(674), 1,
      sym__newline,
    STATE(181), 1,
      aux_sym_open_repeat1,
    STATE(254), 1,
      aux_sym__tags_links,
    ACTIONS(672), 2,
      sym_tag,
      sym_link,
  [4246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    ACTIONS(157), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_POUND,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_STAR,
    ACTIONS(647), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      sym_currency,
    ACTIONS(643), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(676), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(165), 6,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(157), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(157), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(157), 6,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_STAR,
    ACTIONS(635), 1,
      anon_sym_SLASH,
    ACTIONS(157), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(157), 6,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [4376] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(678), 1,
      sym_string,
    ACTIONS(682), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym_open_repeat1,
    STATE(223), 1,
      aux_sym__tags_links,
    ACTIONS(680), 2,
      sym_tag,
      sym_link,
  [4399] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_AT_AT,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      sym__newline,
    STATE(271), 1,
      sym_cost,
    STATE(335), 1,
      sym_price,
  [4424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(684), 1,
      sym_number,
    STATE(122), 1,
      sym_amount,
    STATE(168), 1,
      sym__expr,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_number,
    STATE(164), 1,
      sym__expr,
    STATE(184), 1,
      sym_amount,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4464] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(686), 1,
      sym__dedent,
    STATE(180), 1,
      aux_sym_transaction_repeat1,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
  [4484] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_key,
    ACTIONS(688), 1,
      sym__dedent,
    STATE(135), 1,
      aux_sym_transaction_repeat1,
    STATE(331), 1,
      sym_meta,
    ACTIONS(359), 2,
      sym_tag,
      sym_link,
  [4504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_open_repeat1,
    ACTIONS(693), 4,
      sym__newline,
      sym_string,
      sym_tag,
      sym_link,
  [4520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_number,
    STATE(164), 1,
      sym__expr,
    STATE(330), 1,
      sym_amount,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(695), 1,
      sym_number,
    STATE(172), 1,
      sym__expr,
    ACTIONS(86), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_TILDE,
    ACTIONS(701), 1,
      sym__newline,
    STATE(249), 1,
      aux_sym__tags_links,
    ACTIONS(699), 2,
      sym_tag,
      sym_link,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [4585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [4596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      sym_number,
    STATE(186), 1,
      sym__expr,
    ACTIONS(703), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
      sym_number,
    STATE(189), 1,
      sym__expr,
    ACTIONS(703), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [4643] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(713), 1,
      sym_number,
    STATE(217), 1,
      sym__expr,
    ACTIONS(703), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4660] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      sym_number,
    STATE(173), 1,
      sym__expr,
    ACTIONS(86), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 5,
      sym__newline,
      anon_sym_COMMA,
      sym_string,
      sym_tag,
      sym_link,
  [4688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [4699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(717), 1,
      sym_number,
    STATE(159), 1,
      sym__expr,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym__indent,
    ACTIONS(719), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [4729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(723), 1,
      sym_number,
    STATE(216), 1,
      sym__expr,
    ACTIONS(703), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__indent,
    ACTIONS(725), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [4759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(729), 1,
      sym_number,
    STATE(11), 1,
      sym__expr,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_string,
    ACTIONS(735), 1,
      sym__newline,
    STATE(232), 1,
      aux_sym__tags_links,
    ACTIONS(733), 2,
      sym_tag,
      sym_link,
  [4793] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      sym_number,
    STATE(10), 1,
      sym__expr,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(739), 1,
      sym_number,
    STATE(155), 1,
      sym__expr,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(741), 1,
      sym_number,
    STATE(158), 1,
      sym__expr,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(743), 1,
      sym_number,
    STATE(193), 1,
      sym__expr,
    ACTIONS(703), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__indent,
    ACTIONS(745), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [4874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym__indent,
    ACTIONS(749), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [4887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    ACTIONS(711), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(753), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 1,
      sym_number,
    STATE(169), 1,
      sym__expr,
    ACTIONS(86), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    ACTIONS(711), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(753), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
      sym_number,
    STATE(13), 1,
      sym__expr,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4951] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_string,
    ACTIONS(767), 1,
      sym__newline,
    STATE(263), 1,
      aux_sym__tags_links,
    ACTIONS(765), 2,
      sym_tag,
      sym_link,
  [4968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(711), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(753), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym__indent,
    ACTIONS(771), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [4996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(775), 1,
      sym_number,
    STATE(170), 1,
      sym__expr,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      sym_number,
    STATE(145), 1,
      sym__expr,
    ACTIONS(66), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      sym_number,
    STATE(167), 1,
      sym__expr,
    ACTIONS(197), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    ACTIONS(711), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(753), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    ACTIONS(711), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(753), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5077] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(785), 1,
      sym_number,
    STATE(206), 1,
      sym__expr,
    ACTIONS(703), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      sym_number,
    STATE(208), 1,
      sym__expr,
    ACTIONS(703), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_number,
    STATE(211), 1,
      sym__expr,
    ACTIONS(703), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 4,
      sym__newline,
      sym_string,
      sym_tag,
      sym_link,
  [5138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_COLON,
    STATE(227), 1,
      aux_sym_account_repeat1,
    ACTIONS(172), 2,
      sym__dedent,
      sym_key,
  [5222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__newline,
    STATE(245), 1,
      aux_sym__tags_links,
    ACTIONS(806), 2,
      sym_tag,
      sym_link,
  [5236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__newline,
    STATE(252), 1,
      aux_sym__tags_links,
    ACTIONS(810), 2,
      sym_tag,
      sym_link,
  [5250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__newline,
    STATE(246), 1,
      aux_sym__tags_links,
    ACTIONS(814), 2,
      sym_tag,
      sym_link,
  [5264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_COLON,
    STATE(227), 1,
      aux_sym_account_repeat1,
    ACTIONS(178), 2,
      sym__dedent,
      sym_key,
  [5278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__newline,
    STATE(247), 1,
      aux_sym__tags_links,
    ACTIONS(826), 2,
      sym_tag,
      sym_link,
  [5334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(832), 1,
      sym__dedent,
    STATE(258), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__newline,
    STATE(222), 1,
      aux_sym__tags_links,
    ACTIONS(834), 2,
      sym_tag,
      sym_link,
  [5362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_AT_AT,
    ACTIONS(838), 1,
      sym__newline,
    STATE(338), 1,
      sym_price,
  [5378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [5388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(832), 1,
      sym__dedent,
    STATE(262), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym__tags_links,
    ACTIONS(840), 2,
      sym_tag,
      sym_link,
  [5416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    ACTIONS(848), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(265), 1,
      aux_sym__cost_repeat1,
  [5432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__tags_links,
    ACTIONS(850), 2,
      sym_tag,
      sym_link,
  [5446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    ACTIONS(856), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(265), 1,
      aux_sym__cost_repeat1,
  [5462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(868), 1,
      sym__dedent,
    STATE(262), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym__newline,
    STATE(233), 1,
      aux_sym__tags_links,
    ACTIONS(872), 2,
      sym_tag,
      sym_link,
  [5588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym__tags_links,
    ACTIONS(878), 2,
      sym_tag,
      sym_link,
  [5616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(882), 2,
      sym_tag,
      sym_link,
  [5630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [5640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(887), 1,
      sym__dedent,
    STATE(262), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(887), 1,
      sym__dedent,
    STATE(274), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    ACTIONS(891), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(244), 1,
      aux_sym__cost_repeat1,
  [5684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_AT_AT,
    ACTIONS(375), 1,
      sym__newline,
    STATE(335), 1,
      sym_price,
  [5700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_key,
    ACTIONS(896), 1,
      sym__dedent,
    STATE(262), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym__newline,
    STATE(272), 1,
      aux_sym__tags_links,
    ACTIONS(900), 2,
      sym_tag,
      sym_link,
  [5742] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(909), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(265), 1,
      aux_sym__cost_repeat1,
  [5758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__newline,
    STATE(226), 1,
      aux_sym__tags_links,
    ACTIONS(911), 2,
      sym_tag,
      sym_link,
  [5772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__newline,
    STATE(234), 1,
      aux_sym__tags_links,
    ACTIONS(915), 2,
      sym_tag,
      sym_link,
  [5786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [5796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    ACTIONS(923), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(242), 1,
      aux_sym__cost_repeat1,
  [5812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(925), 1,
      sym__dedent,
    STATE(240), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_AT_AT,
    ACTIONS(666), 1,
      sym__newline,
    STATE(347), 1,
      sym_price,
  [5842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym__tags_links,
    ACTIONS(793), 2,
      sym_tag,
      sym_link,
  [5856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [5866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(929), 1,
      sym__dedent,
    STATE(262), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(929), 1,
      sym__dedent,
    STATE(277), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [5904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(933), 1,
      sym__dedent,
    STATE(262), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_key,
    ACTIONS(933), 1,
      sym__dedent,
    STATE(250), 2,
      sym_meta,
      aux_sym_posting_repeat1,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 4,
      sym__dedent,
      aux_sym_flag_token1,
      aux_sym_flag_token2,
      sym__accounttype,
  [5942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
    ACTIONS(937), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [5953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    ACTIONS(941), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [5964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym__dedent,
      anon_sym_COLON,
      sym_key,
  [5973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_RBRACE,
    ACTIONS(945), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [5984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [5995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(229), 1,
      sym_currency,
    ACTIONS(98), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [6006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(192), 1,
      sym_currency,
    ACTIONS(98), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [6017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_AT,
    ACTIONS(951), 2,
      sym__newline,
      anon_sym_AT_AT,
  [6028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_AT,
    ACTIONS(955), 2,
      sym__newline,
      anon_sym_AT_AT,
  [6039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
    ACTIONS(957), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [6050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(909), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [6061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(228), 1,
      sym_currency,
    ACTIONS(98), 2,
      aux_sym_currency_token1,
      aux_sym_currency_token2,
  [6072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 2,
      sym__dedent,
      sym_key,
  [6080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 2,
      sym__dedent,
      sym_key,
  [6088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    STATE(230), 1,
      sym_account,
  [6098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__accounttype,
    STATE(178), 1,
      sym_account,
  [6108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    STATE(55), 1,
      sym_account,
  [6118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__accounttype,
    STATE(306), 1,
      sym_account,
  [6128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__accounttype,
    STATE(352), 1,
      sym_account,
  [6138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__accounttype,
    STATE(353), 1,
      sym_account,
  [6148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 2,
      sym__dedent,
      sym_key,
  [6156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      sym__dedent,
      sym_key,
  [6164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COLON,
    STATE(18), 1,
      aux_sym_account_repeat1,
  [6174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COLON,
    STATE(15), 1,
      aux_sym_account_repeat1,
  [6184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_string,
    ACTIONS(969), 1,
      sym__newline,
  [6194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    STATE(139), 1,
      sym_account,
  [6204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__accounttype,
    STATE(241), 1,
      sym_account,
  [6214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_string,
    ACTIONS(973), 1,
      sym__newline,
  [6224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_COLON,
    STATE(231), 1,
      aux_sym_account_repeat1,
  [6234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      sym__dedent,
      sym_key,
  [6242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_COLON,
    STATE(137), 1,
      aux_sym_account_repeat1,
  [6252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym__accounttype,
  [6259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
  [6266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym__newline,
  [6273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_string,
  [6280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym_string,
  [6287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym_string,
  [6294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_key,
  [6301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_COLON,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym__newline,
  [6315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym__accountname,
  [6322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_key,
  [6329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym_tag,
  [6336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_tag,
  [6343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__newline,
  [6350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_COLON,
  [6357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__newline,
  [6364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__newline,
  [6371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__newline,
  [6378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_RBRACE_RBRACE,
  [6385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__newline,
  [6392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym__newline,
  [6399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_COLON,
  [6406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym__newline,
  [6413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__newline,
  [6420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym__newline,
  [6427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__newline,
  [6434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym_number,
  [6441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__newline,
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym__accountname,
  [6455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COLON,
  [6462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_string,
  [6469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
  [6476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym_string,
  [6483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__accountname,
  [6490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym_string,
  [6497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym__newline,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__newline,
  [6511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym__accountname,
  [6518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym__newline,
  [6525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym_string,
  [6532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym__newline,
  [6539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym_string,
  [6546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym_string,
  [6553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 193,
  [SMALL_STATE(6)] = 245,
  [SMALL_STATE(7)] = 297,
  [SMALL_STATE(8)] = 349,
  [SMALL_STATE(9)] = 398,
  [SMALL_STATE(10)] = 447,
  [SMALL_STATE(11)] = 472,
  [SMALL_STATE(12)] = 501,
  [SMALL_STATE(13)] = 526,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 640,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 696,
  [SMALL_STATE(20)] = 720,
  [SMALL_STATE(21)] = 743,
  [SMALL_STATE(22)] = 766,
  [SMALL_STATE(23)] = 807,
  [SMALL_STATE(24)] = 830,
  [SMALL_STATE(25)] = 871,
  [SMALL_STATE(26)] = 897,
  [SMALL_STATE(27)] = 941,
  [SMALL_STATE(28)] = 967,
  [SMALL_STATE(29)] = 993,
  [SMALL_STATE(30)] = 1019,
  [SMALL_STATE(31)] = 1045,
  [SMALL_STATE(32)] = 1071,
  [SMALL_STATE(33)] = 1097,
  [SMALL_STATE(34)] = 1123,
  [SMALL_STATE(35)] = 1149,
  [SMALL_STATE(36)] = 1175,
  [SMALL_STATE(37)] = 1201,
  [SMALL_STATE(38)] = 1227,
  [SMALL_STATE(39)] = 1253,
  [SMALL_STATE(40)] = 1279,
  [SMALL_STATE(41)] = 1305,
  [SMALL_STATE(42)] = 1331,
  [SMALL_STATE(43)] = 1357,
  [SMALL_STATE(44)] = 1383,
  [SMALL_STATE(45)] = 1409,
  [SMALL_STATE(46)] = 1435,
  [SMALL_STATE(47)] = 1461,
  [SMALL_STATE(48)] = 1487,
  [SMALL_STATE(49)] = 1513,
  [SMALL_STATE(50)] = 1539,
  [SMALL_STATE(51)] = 1565,
  [SMALL_STATE(52)] = 1591,
  [SMALL_STATE(53)] = 1617,
  [SMALL_STATE(54)] = 1643,
  [SMALL_STATE(55)] = 1682,
  [SMALL_STATE(56)] = 1723,
  [SMALL_STATE(57)] = 1746,
  [SMALL_STATE(58)] = 1785,
  [SMALL_STATE(59)] = 1808,
  [SMALL_STATE(60)] = 1847,
  [SMALL_STATE(61)] = 1886,
  [SMALL_STATE(62)] = 1927,
  [SMALL_STATE(63)] = 1966,
  [SMALL_STATE(64)] = 2005,
  [SMALL_STATE(65)] = 2044,
  [SMALL_STATE(66)] = 2083,
  [SMALL_STATE(67)] = 2122,
  [SMALL_STATE(68)] = 2145,
  [SMALL_STATE(69)] = 2180,
  [SMALL_STATE(70)] = 2203,
  [SMALL_STATE(71)] = 2242,
  [SMALL_STATE(72)] = 2265,
  [SMALL_STATE(73)] = 2288,
  [SMALL_STATE(74)] = 2327,
  [SMALL_STATE(75)] = 2366,
  [SMALL_STATE(76)] = 2386,
  [SMALL_STATE(77)] = 2406,
  [SMALL_STATE(78)] = 2426,
  [SMALL_STATE(79)] = 2446,
  [SMALL_STATE(80)] = 2466,
  [SMALL_STATE(81)] = 2486,
  [SMALL_STATE(82)] = 2506,
  [SMALL_STATE(83)] = 2526,
  [SMALL_STATE(84)] = 2546,
  [SMALL_STATE(85)] = 2566,
  [SMALL_STATE(86)] = 2586,
  [SMALL_STATE(87)] = 2606,
  [SMALL_STATE(88)] = 2626,
  [SMALL_STATE(89)] = 2646,
  [SMALL_STATE(90)] = 2666,
  [SMALL_STATE(91)] = 2686,
  [SMALL_STATE(92)] = 2706,
  [SMALL_STATE(93)] = 2726,
  [SMALL_STATE(94)] = 2746,
  [SMALL_STATE(95)] = 2766,
  [SMALL_STATE(96)] = 2786,
  [SMALL_STATE(97)] = 2806,
  [SMALL_STATE(98)] = 2826,
  [SMALL_STATE(99)] = 2846,
  [SMALL_STATE(100)] = 2866,
  [SMALL_STATE(101)] = 2886,
  [SMALL_STATE(102)] = 2906,
  [SMALL_STATE(103)] = 2926,
  [SMALL_STATE(104)] = 2946,
  [SMALL_STATE(105)] = 2966,
  [SMALL_STATE(106)] = 2986,
  [SMALL_STATE(107)] = 3006,
  [SMALL_STATE(108)] = 3026,
  [SMALL_STATE(109)] = 3046,
  [SMALL_STATE(110)] = 3066,
  [SMALL_STATE(111)] = 3086,
  [SMALL_STATE(112)] = 3106,
  [SMALL_STATE(113)] = 3126,
  [SMALL_STATE(114)] = 3146,
  [SMALL_STATE(115)] = 3166,
  [SMALL_STATE(116)] = 3186,
  [SMALL_STATE(117)] = 3206,
  [SMALL_STATE(118)] = 3226,
  [SMALL_STATE(119)] = 3246,
  [SMALL_STATE(120)] = 3266,
  [SMALL_STATE(121)] = 3286,
  [SMALL_STATE(122)] = 3306,
  [SMALL_STATE(123)] = 3326,
  [SMALL_STATE(124)] = 3346,
  [SMALL_STATE(125)] = 3366,
  [SMALL_STATE(126)] = 3386,
  [SMALL_STATE(127)] = 3406,
  [SMALL_STATE(128)] = 3426,
  [SMALL_STATE(129)] = 3446,
  [SMALL_STATE(130)] = 3466,
  [SMALL_STATE(131)] = 3486,
  [SMALL_STATE(132)] = 3506,
  [SMALL_STATE(133)] = 3526,
  [SMALL_STATE(134)] = 3546,
  [SMALL_STATE(135)] = 3564,
  [SMALL_STATE(136)] = 3589,
  [SMALL_STATE(137)] = 3614,
  [SMALL_STATE(138)] = 3632,
  [SMALL_STATE(139)] = 3656,
  [SMALL_STATE(140)] = 3680,
  [SMALL_STATE(141)] = 3696,
  [SMALL_STATE(142)] = 3720,
  [SMALL_STATE(143)] = 3744,
  [SMALL_STATE(144)] = 3768,
  [SMALL_STATE(145)] = 3792,
  [SMALL_STATE(146)] = 3808,
  [SMALL_STATE(147)] = 3832,
  [SMALL_STATE(148)] = 3856,
  [SMALL_STATE(149)] = 3880,
  [SMALL_STATE(150)] = 3904,
  [SMALL_STATE(151)] = 3928,
  [SMALL_STATE(152)] = 3952,
  [SMALL_STATE(153)] = 3968,
  [SMALL_STATE(154)] = 3992,
  [SMALL_STATE(155)] = 4010,
  [SMALL_STATE(156)] = 4028,
  [SMALL_STATE(157)] = 4052,
  [SMALL_STATE(158)] = 4076,
  [SMALL_STATE(159)] = 4092,
  [SMALL_STATE(160)] = 4107,
  [SMALL_STATE(161)] = 4132,
  [SMALL_STATE(162)] = 4153,
  [SMALL_STATE(163)] = 4174,
  [SMALL_STATE(164)] = 4187,
  [SMALL_STATE(165)] = 4208,
  [SMALL_STATE(166)] = 4223,
  [SMALL_STATE(167)] = 4246,
  [SMALL_STATE(168)] = 4263,
  [SMALL_STATE(169)] = 4284,
  [SMALL_STATE(170)] = 4299,
  [SMALL_STATE(171)] = 4314,
  [SMALL_STATE(172)] = 4329,
  [SMALL_STATE(173)] = 4344,
  [SMALL_STATE(174)] = 4361,
  [SMALL_STATE(175)] = 4376,
  [SMALL_STATE(176)] = 4399,
  [SMALL_STATE(177)] = 4424,
  [SMALL_STATE(178)] = 4444,
  [SMALL_STATE(179)] = 4464,
  [SMALL_STATE(180)] = 4484,
  [SMALL_STATE(181)] = 4504,
  [SMALL_STATE(182)] = 4520,
  [SMALL_STATE(183)] = 4540,
  [SMALL_STATE(184)] = 4557,
  [SMALL_STATE(185)] = 4574,
  [SMALL_STATE(186)] = 4585,
  [SMALL_STATE(187)] = 4596,
  [SMALL_STATE(188)] = 4613,
  [SMALL_STATE(189)] = 4630,
  [SMALL_STATE(190)] = 4643,
  [SMALL_STATE(191)] = 4660,
  [SMALL_STATE(192)] = 4677,
  [SMALL_STATE(193)] = 4688,
  [SMALL_STATE(194)] = 4699,
  [SMALL_STATE(195)] = 4716,
  [SMALL_STATE(196)] = 4729,
  [SMALL_STATE(197)] = 4746,
  [SMALL_STATE(198)] = 4759,
  [SMALL_STATE(199)] = 4776,
  [SMALL_STATE(200)] = 4793,
  [SMALL_STATE(201)] = 4810,
  [SMALL_STATE(202)] = 4827,
  [SMALL_STATE(203)] = 4844,
  [SMALL_STATE(204)] = 4861,
  [SMALL_STATE(205)] = 4874,
  [SMALL_STATE(206)] = 4887,
  [SMALL_STATE(207)] = 4902,
  [SMALL_STATE(208)] = 4919,
  [SMALL_STATE(209)] = 4934,
  [SMALL_STATE(210)] = 4951,
  [SMALL_STATE(211)] = 4968,
  [SMALL_STATE(212)] = 4983,
  [SMALL_STATE(213)] = 4996,
  [SMALL_STATE(214)] = 5013,
  [SMALL_STATE(215)] = 5030,
  [SMALL_STATE(216)] = 5047,
  [SMALL_STATE(217)] = 5062,
  [SMALL_STATE(218)] = 5077,
  [SMALL_STATE(219)] = 5094,
  [SMALL_STATE(220)] = 5111,
  [SMALL_STATE(221)] = 5128,
  [SMALL_STATE(222)] = 5138,
  [SMALL_STATE(223)] = 5152,
  [SMALL_STATE(224)] = 5166,
  [SMALL_STATE(225)] = 5180,
  [SMALL_STATE(226)] = 5194,
  [SMALL_STATE(227)] = 5208,
  [SMALL_STATE(228)] = 5222,
  [SMALL_STATE(229)] = 5236,
  [SMALL_STATE(230)] = 5250,
  [SMALL_STATE(231)] = 5264,
  [SMALL_STATE(232)] = 5278,
  [SMALL_STATE(233)] = 5292,
  [SMALL_STATE(234)] = 5306,
  [SMALL_STATE(235)] = 5320,
  [SMALL_STATE(236)] = 5334,
  [SMALL_STATE(237)] = 5348,
  [SMALL_STATE(238)] = 5362,
  [SMALL_STATE(239)] = 5378,
  [SMALL_STATE(240)] = 5388,
  [SMALL_STATE(241)] = 5402,
  [SMALL_STATE(242)] = 5416,
  [SMALL_STATE(243)] = 5432,
  [SMALL_STATE(244)] = 5446,
  [SMALL_STATE(245)] = 5462,
  [SMALL_STATE(246)] = 5476,
  [SMALL_STATE(247)] = 5490,
  [SMALL_STATE(248)] = 5504,
  [SMALL_STATE(249)] = 5518,
  [SMALL_STATE(250)] = 5532,
  [SMALL_STATE(251)] = 5546,
  [SMALL_STATE(252)] = 5560,
  [SMALL_STATE(253)] = 5574,
  [SMALL_STATE(254)] = 5588,
  [SMALL_STATE(255)] = 5602,
  [SMALL_STATE(256)] = 5616,
  [SMALL_STATE(257)] = 5630,
  [SMALL_STATE(258)] = 5640,
  [SMALL_STATE(259)] = 5654,
  [SMALL_STATE(260)] = 5668,
  [SMALL_STATE(261)] = 5684,
  [SMALL_STATE(262)] = 5700,
  [SMALL_STATE(263)] = 5714,
  [SMALL_STATE(264)] = 5728,
  [SMALL_STATE(265)] = 5742,
  [SMALL_STATE(266)] = 5758,
  [SMALL_STATE(267)] = 5772,
  [SMALL_STATE(268)] = 5786,
  [SMALL_STATE(269)] = 5796,
  [SMALL_STATE(270)] = 5812,
  [SMALL_STATE(271)] = 5826,
  [SMALL_STATE(272)] = 5842,
  [SMALL_STATE(273)] = 5856,
  [SMALL_STATE(274)] = 5866,
  [SMALL_STATE(275)] = 5880,
  [SMALL_STATE(276)] = 5894,
  [SMALL_STATE(277)] = 5904,
  [SMALL_STATE(278)] = 5918,
  [SMALL_STATE(279)] = 5932,
  [SMALL_STATE(280)] = 5942,
  [SMALL_STATE(281)] = 5953,
  [SMALL_STATE(282)] = 5964,
  [SMALL_STATE(283)] = 5973,
  [SMALL_STATE(284)] = 5984,
  [SMALL_STATE(285)] = 5995,
  [SMALL_STATE(286)] = 6006,
  [SMALL_STATE(287)] = 6017,
  [SMALL_STATE(288)] = 6028,
  [SMALL_STATE(289)] = 6039,
  [SMALL_STATE(290)] = 6050,
  [SMALL_STATE(291)] = 6061,
  [SMALL_STATE(292)] = 6072,
  [SMALL_STATE(293)] = 6080,
  [SMALL_STATE(294)] = 6088,
  [SMALL_STATE(295)] = 6098,
  [SMALL_STATE(296)] = 6108,
  [SMALL_STATE(297)] = 6118,
  [SMALL_STATE(298)] = 6128,
  [SMALL_STATE(299)] = 6138,
  [SMALL_STATE(300)] = 6148,
  [SMALL_STATE(301)] = 6156,
  [SMALL_STATE(302)] = 6164,
  [SMALL_STATE(303)] = 6174,
  [SMALL_STATE(304)] = 6184,
  [SMALL_STATE(305)] = 6194,
  [SMALL_STATE(306)] = 6204,
  [SMALL_STATE(307)] = 6214,
  [SMALL_STATE(308)] = 6224,
  [SMALL_STATE(309)] = 6234,
  [SMALL_STATE(310)] = 6242,
  [SMALL_STATE(311)] = 6252,
  [SMALL_STATE(312)] = 6259,
  [SMALL_STATE(313)] = 6266,
  [SMALL_STATE(314)] = 6273,
  [SMALL_STATE(315)] = 6280,
  [SMALL_STATE(316)] = 6287,
  [SMALL_STATE(317)] = 6294,
  [SMALL_STATE(318)] = 6301,
  [SMALL_STATE(319)] = 6308,
  [SMALL_STATE(320)] = 6315,
  [SMALL_STATE(321)] = 6322,
  [SMALL_STATE(322)] = 6329,
  [SMALL_STATE(323)] = 6336,
  [SMALL_STATE(324)] = 6343,
  [SMALL_STATE(325)] = 6350,
  [SMALL_STATE(326)] = 6357,
  [SMALL_STATE(327)] = 6364,
  [SMALL_STATE(328)] = 6371,
  [SMALL_STATE(329)] = 6378,
  [SMALL_STATE(330)] = 6385,
  [SMALL_STATE(331)] = 6392,
  [SMALL_STATE(332)] = 6399,
  [SMALL_STATE(333)] = 6406,
  [SMALL_STATE(334)] = 6413,
  [SMALL_STATE(335)] = 6420,
  [SMALL_STATE(336)] = 6427,
  [SMALL_STATE(337)] = 6434,
  [SMALL_STATE(338)] = 6441,
  [SMALL_STATE(339)] = 6448,
  [SMALL_STATE(340)] = 6455,
  [SMALL_STATE(341)] = 6462,
  [SMALL_STATE(342)] = 6469,
  [SMALL_STATE(343)] = 6476,
  [SMALL_STATE(344)] = 6483,
  [SMALL_STATE(345)] = 6490,
  [SMALL_STATE(346)] = 6497,
  [SMALL_STATE(347)] = 6504,
  [SMALL_STATE(348)] = 6511,
  [SMALL_STATE(349)] = 6518,
  [SMALL_STATE(350)] = 6525,
  [SMALL_STATE(351)] = 6532,
  [SMALL_STATE(352)] = 6539,
  [SMALL_STATE(353)] = 6546,
  [SMALL_STATE(354)] = 6553,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ledger, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(323),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(322),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(321),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(317),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(316),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(315),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(314),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(177),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(177),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(26),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ledger_repeat1, 2), SHIFT_REPEAT(328),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ledger, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(209),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(220),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(9),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(21),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(9),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(23),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(23),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(303),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(16),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(344),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_value, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_value, 1),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(339),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 9),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 8, .production_id = 9),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 8, .production_id = 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 8),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 8),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 6),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6, .production_id = 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5, .production_id = 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5, .production_id = 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 6, .production_id = 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 7),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 7),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 7),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5, .production_id = 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 9),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 9),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 8, .production_id = 7),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 8, .production_id = 7),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pragma, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pragma, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_popmeta, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 6),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 6),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 6),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 6),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 7),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 7),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 7),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 7),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 4),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7, .production_id = 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 7, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 7, .production_id = 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 5),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushmeta, 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 7),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 7),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 7, .production_id = 6),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 7, .production_id = 6),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poptag, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushtag, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 8, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 8, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 8, .production_id = 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 8, .production_id = 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 8),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 8),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 8),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 8),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 9, .production_id = 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 9, .production_id = 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 9, .production_id = 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 9, .production_id = 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 9, .production_id = 9),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 9, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 10, .production_id = 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 10, .production_id = 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 10),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 10),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directive, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(331),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(332),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(320),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat2, 2), SHIFT_REPEAT(311),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat2, 2), SHIFT_REPEAT(302),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat2, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(286),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(348),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost, 2, .production_id = 8),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost, 2, .production_id = 8),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tags_links, 2), SHIFT_REPEAT(256),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tags_links, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost, 1),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_posting_repeat1, 2), SHIFT_REPEAT(340),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_posting_repeat1, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cost_repeat1, 2), SHIFT_REPEAT(68),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_repeat1, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_repeat1, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost, 1, .production_id = 8),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost, 1, .production_id = 8),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_amount, 2),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_amount, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_repeat1, 2, .production_id = 10),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_repeat1, 2, .production_id = 10),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_amount, 4),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_amount, 4),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 3),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 2),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_amount, 3),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_amount, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [975] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_beancount_external_scanner_create(void);
void tree_sitter_beancount_external_scanner_destroy(void *);
bool tree_sitter_beancount_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_beancount_external_scanner_serialize(void *, char *);
void tree_sitter_beancount_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beancount(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_keyword,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_beancount_external_scanner_create,
      tree_sitter_beancount_external_scanner_destroy,
      tree_sitter_beancount_external_scanner_scan,
      tree_sitter_beancount_external_scanner_serialize,
      tree_sitter_beancount_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
