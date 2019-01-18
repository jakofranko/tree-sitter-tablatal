module.exports = grammar({
  name: 'Tablatal',

  rules: {
    source_file: $ => seq(
        prec(1, $.header_definition),
        repeat(prec(2, $.row_definition))
    ),

    header_definition: $ => seq(
        repeat1($.column_definition),
        /\n/
    ),
    column_definition: $ => /[A-Z\_]+/,

    row_definition: $ => seq(
        repeat($.item_definition),
        /\n/
    ),
    item_definition: $ => /\S+/
  }
});
