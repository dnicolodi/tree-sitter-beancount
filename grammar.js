module.exports = grammar({
  name: 'beancount',

  extras: $ => [
    $.comment,
    /[\s]+/,
  ],

  word: $ => $.keyword,

  externals: $ => [
    $._indent,
    $._dedent,
    $._newline,
    $._header,
  ],

  inline: $ => [
    $._tags_links,
    $._directive_metadata,
  ],

  supertypes: $ => [
    $._pragma,
    $._directive,
  ],

  rules: {

    // file:
    //   | declarations YYEOF
    ledger: $ => repeat($._declarations),

    // declarations:
    //   | declarations EOL
    //   | declarations pragma
    //   | declarations directive
    //   | declarations error
    //   | %empty
    _declarations: $ => choice(
      $._pragma,
      $._directive,
      $.header,
    ),

    // pragma:
    //   | pushtag
    //   | poptag
    //   | pushmeta
    //   | popmeta
    //   | option
    //   | include
    //   | plugin
    _pragma: $ => choice(
      $.pushtag,
      $.poptag,
      $.pushmeta,
      $.popmeta,
      $.option,
      $.include,
      $.plugin
    ),

    // pushtag:
    //   | PUSHTAG TAG eol
    pushtag: $ => seq('pushtag', $.tag, $._newline),

    // poptag:
    //   | POPTAG TAG eol
    poptag: $ => seq('poptag', $.tag, $._newline),

    // pushmeta:
    //   | PUSHMETA KEY COLON meta_value eol
    pushmeta: $ => seq('pushmeta', $.key, ':', $.value, $._newline),

    // popmeta:
    //   | POPMETA KEY COLON eol
    popmeta: $ => seq('popmeta', $.key, ':', $._newline),

    // option:
    //   | option_unary
    //   | option_binary
    // option_unary:
    //   | OPTIONS STRING eol
    // option_binary:
    //   | OPTION STRING STRING eol
    option: $ => seq('option', $.string, optional($.string), $._newline),

    // include:
    //   | INCLUDE STRING eol
    include: $ => seq('include', $.string, $._newline),

    // plugin:
    //   | PLUGIN STRING eol
    //   | PLUGIN STRING STRING eol
    plugin: $ => seq('plugin', $.string, optional($.string), $._newline),

    // directive:
    //   | transaction
    //   | price
    //   | balance
    //   | open
    //   | close
    //   | commodity
    //   | pad
    //   | document
    //   | note
    //   | event
    //   | query
    //   | custom
    _directive: $ => choice(
      $.transaction,
      $.price,
      $.balance,
      $.open,
      $.close,
      $.commodity,
      $.pad,
      $.document,
      $.note,
      $.event,
      $.query,
      $.custom,
    ),

    // transaction:
    //   | transaction_line
    //   | transaction_line INDENT metadata posting_list DEDENT
    // transaction_line:
    //   | DATE txn payee_narration tags_links eol
    // txn:
    //   | TXN
    //   | FLAG
    //   | ASTERISK
    //   | HASH
    // payee_narration:
    //   | STRING STRING
    //   | STRING
    //   | %empty
    transaction: $ => seq(
      $.date,
      choice('txn', $.flag),
      optional(choice(
        seq(alias($.string, $.payee), alias($.string, $.narration)),
        alias($.string, $.narration),
      )),
      optional($._tags_links),
      $._newline,
      optional(seq(
        $._indent,
        repeat(seq(choice($.tag, $.link, $.meta), $._newline)),
        repeat($.posting),
        $._dedent,
      )),
    ),

    // price:
    //   | DATE PRICE CURRENCY amount tags_links eol indented_metadata
    price: $ => seq($.date, 'price', $.currency, $.amount, $._directive_metadata),

    // balance:
    //   | DATE BALANCE account amount_with_tolerance tags_links eol indented_metadata
    // amount_with_tolerance:
    //   | amount
    //   | expr TILDE NUMBER CURRENCY
    balance: $ => seq($.date, 'balance', $.account, $.amount, optional(seq('~', $.number, $.currency)), $._directive_metadata),

    // open:
    //   | DATE OPEN account currency_list booking tags_links eol indented_metadata
    // currency_list:
    //   | %empty
    //   | CURRENCY
    //   | currency_list COMMA CURRENCY
    open: $ => seq($.date, 'open', $.account, sep(',', $.currency), optional(alias($.string, $.booking)), $._directive_metadata),

    // close:
    //   | DATE CLOSE account tags_links eol indented_metadata
    close: $ => seq($.date, 'close', $.account, $._directive_metadata),

    // commodity:
    //   | DATE COMMODITY CURRENCY tags_links eol indented_metadata
    commodity: $ => seq($.date, 'commodity', $.currency,  $._directive_metadata),

    // pad:
    //   | DATE PAD account account tags_links eol indented_metadata
    pad: $ => seq($.date, 'pad', $.account, $.account, $._directive_metadata),

    // document:
    //   | DATE DOCUMENT account filename tags_links eol indented_metadata
    document: $ => seq($.date, 'document', $.account, alias($.string, $.filename), $._directive_metadata),

    // note:
    //   | DATE NOTE account STRING tags_links eol indented_metadata
    note: $ => seq($.date, 'note', $.account, alias($.string, $.note), $._directive_metadata),

    // event:
    //   | DATE EVENT STRING STRING tags_links eol indented_metadata
    event: $ => seq($.date, 'event', $.string, $.string, $._directive_metadata),

    // query:
    //   | DATE QUERY STRING STRING tags_links eol indented_metadata
    query: $ => seq($.date, 'query', alias($.string, $.name), alias($.string, $.bql), $._directive_metadata),

    // custom:
    //   | DATE CUSTOM STRING meta_value_list eol indented_metadata
    // meta_value_list:
    //   | %empty
    //   | meta_value_list simple_value
    custom: $ => seq($.date, 'custom', $.string, repeat($._simple_value), $._metadata),

    // indented_metadata:
    //   | %empty
    //   | INDENT metadata DEDENT
    // metadata:
    //   | %empty
    //   | metadata metadata_line
    // metadata_line:
    //   | KEY COLON meta_value eol
    //   | TAG eol
    //   | LINK eol
    _metadata: $ => seq($._indent, repeat(seq(choice($.tag, $.link, $.meta), $._newline)), $._dedent),

    _directive_metadata: $ => seq(optional($._tags_links), $._newline, optional($._metadata)),

    meta: $ => seq($.key, ':', optional($.value)),

    // simple_value:
    //   | STRING
    //   | CURRENCY
    //   | account
    //   | TAG
    //   | LINK
    //   | DATE
    //   | BOOL
    //   | NONE
    //   | expr
    //   | %empty
    _simple_value: $ => choice(
      $.string,
      $.currency,
      $.account,
      $.tag,
      $.link,
      $.date,
      $.bool,
      $.none,
      $._expr,
    ),

    // meta_value:
    //   | simple_value
    //   | amount
    value: $ => choice(
      $._simple_value,
      $.amount,
    ),

    // tags_links:
    //   | %empty
    //   | tags_links TAG
    //   | tags_links LINK
    _tags_links: $ => repeat1(choice($.tag, $.link)),

    // expr:
    //   | NUMBER
    //   | expr PLUS expr
    //   | expr MINUS expr
    //   | expr ASTERISK expr
    //   | expr SLASH expr
    //   | MINUS expr %prec NEGATIVE
    //   | PLUS expr %prec NEGATIVE
    //   | LPAREN expr RPAREN
    _expr: $ => choice(
      $.number,
      prec.left(1, seq($._expr, '+', $._expr)),
      prec.left(1, seq($._expr, '-', $._expr)),
      prec.left(2, seq($._expr, '*', $._expr)),
      prec.left(2, seq($._expr, '/', $._expr)),
      prec(3, seq('-', $._expr)),
      prec(3, seq('+', $._expr)),
      seq('(', $._expr, ')'),
    ),

    // posting_list:
    //   | %empty
    //   | posting_list eol
    //   | posting_list posting_and_metadata
    // posting_and_metadata:
    //   | posting indented_metadata
    // posting:
    //   | optflag account maybe_expr maybe_currency cost_spec eol
    //   | optflag account maybe_expr maybe_currency cost_spec AT price_annotation eol
    //   | optflag account maybe_expr maybe_currency cost_spec ATAT price_annotation eol
    //   | optflag account eol
    // optflag:
    //   | %empty
    //   | ASTERISK
    //   | HASH
    //   | FLAG
    // price_annotation:
    //   | maybe_expr maybe_currency
    // maybe_expr:
    //   | expr
    //   | %empty
    // maybe_currency:
    //   | CURRENCY
    //   | %empty
    // compound_amount:
    //   | CURRENCY
    //   | compound_expr
    //   | compound_expr CURRENCY
    // compound_expr:
    //   | expr
    //   | maybe_expr HASH maybe_expr
    // cost_spec:
    //   | LCURL cost_comp_list RCURL
    //   | LCURLCURL cost_comp_list RCURLCURL
    //   | %empty
    // cost_comp_list:
    //   | %empty
    //   | cost_comp
    //   | cost_comp_list COMMA cost_comp
    // cost_comp:
    //   | compound_amount
    //   | DATE
    //   | STRING
    //   | ASTERISK
    posting: $ => seq(
      optional($.flag),
      $.account,
      optional($.amount),
      optional($.cost),
      optional($.price),
      $._newline,
      optional(seq($._indent, repeat($.meta), $._dedent))),

    _compound_amount: $ => choice(
      seq($._expr, '#', $._expr, $.currency),
      seq('#', $._expr, $.currency),
      seq($._expr, '#', $.currency),
      seq($._expr, $.currency),      
      seq(optional('#'), $.currency)),
    _cost: $ => sep1(',', choice($._compound_amount, $.date, $.string, alias('*', $.merge))),
    cost: $ => choice(seq( '{', optional($._cost), '}' ), seq('{{', optional($._cost), '}}')),

    price: $ => choice(seq('@', $.amount), seq('@@', $.amount)),

    // amount:
    //   | expr CURRENCY
    amount: $ => seq($._expr, $.currency),

    comment: $ => token(seq(';', /.*/)),

    header: $ => seq($._header, $._newline),

    flag: $ => choice(
      /[!&#?%\*]/,
      /'[A-Z]/,
    ),

    date: $ => /\d{4}[\-/]\d{2}[\-/]\d{2}/,

    bool: $ => choice('TRUE', 'FALSE'),

    none: $ => 'NULL',

    currency: $ => choice(
      /[A-Z][A-Z0-9\'\._\-]*[A-Z0-9]?/,
      /\/[A-Z0-9\'\._\-]*[A-Z]([A-Z0-9\'\._\-]*[A-Z0-9])/,
    ),

    _accounttype: $ => /[\p{Lu}\p{Lo}][\p{L}\p{N}\-]*/,
    _accountname: $ => /[\p{Lu}\p{Lo}\p{N}][\p{L}\p{N}\-]*/,
    account: $ => seq($._accounttype, repeat1(seq(':', $._accountname))),

    string: $ => /\"([^\"]|\\\")*\"/,

    number: $ => /(\d+|\d[0-9,]+\d)(\.\d*)?/,

    tag: $ => /#[A-Za-z0-9\-_/.]+/,

    link: $ => /\^[A-Za-z0-9\-_/.]+/,

    key: $ => /[a-z][a-zA-Z0-9\-_]+/,

    keyword: $ => /[a-z]+/,
  }
})

function sep (separator, rule) {
  return optional(sep1(separator, rule))
}

function sep1 (separator, rule) {
  return seq(rule, repeat(seq(separator, rule)))
}
