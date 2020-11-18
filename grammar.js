module.exports = grammar({
  name: 'Tablatal',

  rules: {
    source_file: $ => seq(
        repeat($.comment_definition),
        $.header_definition,
        repeat($.row_definition)
    ),

    comment_definition: $ => /~\s?.*/,

    header_definition: $ => seq(
        $.header_key,
        repeat1($.column_definition),
        /\n/
    ),
    header_key: $ => '@ ',
    column_definition: $ => /[A-Z_]+/,

    row_definition: $ => seq(
        repeat($.item_definition),
        /\n/
    ),
    item_definition: $ => /\S+/
  }
});
