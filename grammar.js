module.exports = grammar({
  name: 'Tablatal',

  rules: {
    // The production rules of the context-free grammar
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
        $.header_definition,
        $.row_definition
    ),

    header_definition: $ => /[A-Z_\s]+\n/,
    row_definition: $ => /.*\n/
  }
});
