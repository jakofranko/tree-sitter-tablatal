#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_comment_definition = 1,
  aux_sym_header_definition_token1 = 2,
  sym_column_definition = 3,
  sym_item_definition = 4,
  sym_source_file = 5,
  sym_header_definition = 6,
  sym_row_definition = 7,
  aux_sym_source_file_repeat1 = 8,
  aux_sym_source_file_repeat2 = 9,
  aux_sym_header_definition_repeat1 = 10,
  aux_sym_row_definition_repeat1 = 11,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment_definition] = "comment_definition",
  [aux_sym_header_definition_token1] = "header_definition_token1",
  [sym_column_definition] = "column_definition",
  [sym_item_definition] = "item_definition",
  [sym_source_file] = "source_file",
  [sym_header_definition] = "header_definition",
  [sym_row_definition] = "row_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_header_definition_repeat1] = "header_definition_repeat1",
  [aux_sym_row_definition_repeat1] = "row_definition_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment_definition] = sym_comment_definition,
  [aux_sym_header_definition_token1] = aux_sym_header_definition_token1,
  [sym_column_definition] = sym_column_definition,
  [sym_item_definition] = sym_item_definition,
  [sym_source_file] = sym_source_file,
  [sym_header_definition] = sym_header_definition,
  [sym_row_definition] = sym_row_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_header_definition_repeat1] = aux_sym_header_definition_repeat1,
  [aux_sym_row_definition_repeat1] = aux_sym_row_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_column_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_item_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_row_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '~') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(11);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment_definition);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment_definition);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment_definition);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment_definition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_header_definition_token1);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_column_definition);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_column_definition);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_item_definition);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_definition] = ACTIONS(1),
    [sym_column_definition] = ACTIONS(1),
    [sym_item_definition] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_header_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_header_definition_repeat1] = STATE(8),
    [sym_comment_definition] = ACTIONS(3),
    [sym_column_definition] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      aux_sym_header_definition_token1,
    ACTIONS(11), 1,
      sym_item_definition,
    STATE(10), 1,
      aux_sym_row_definition_repeat1,
    STATE(3), 2,
      sym_row_definition,
      aux_sym_source_file_repeat2,
  [17] = 5,
    ACTIONS(9), 1,
      aux_sym_header_definition_token1,
    ACTIONS(11), 1,
      sym_item_definition,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_row_definition_repeat1,
    STATE(5), 2,
      sym_row_definition,
      aux_sym_source_file_repeat2,
  [34] = 5,
    ACTIONS(9), 1,
      aux_sym_header_definition_token1,
    ACTIONS(11), 1,
      sym_item_definition,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_row_definition_repeat1,
    STATE(6), 2,
      sym_row_definition,
      aux_sym_source_file_repeat2,
  [51] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_header_definition_token1,
    ACTIONS(20), 1,
      sym_item_definition,
    STATE(10), 1,
      aux_sym_row_definition_repeat1,
    STATE(5), 2,
      sym_row_definition,
      aux_sym_source_file_repeat2,
  [68] = 5,
    ACTIONS(9), 1,
      aux_sym_header_definition_token1,
    ACTIONS(11), 1,
      sym_item_definition,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_row_definition_repeat1,
    STATE(5), 2,
      sym_row_definition,
      aux_sym_source_file_repeat2,
  [85] = 5,
    ACTIONS(5), 1,
      sym_column_definition,
    ACTIONS(25), 1,
      sym_comment_definition,
    STATE(4), 1,
      sym_header_definition,
    STATE(8), 1,
      aux_sym_header_definition_repeat1,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
  [101] = 3,
    ACTIONS(27), 1,
      aux_sym_header_definition_token1,
    ACTIONS(29), 1,
      sym_column_definition,
    STATE(13), 1,
      aux_sym_header_definition_repeat1,
  [111] = 2,
    ACTIONS(33), 1,
      sym_item_definition,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      aux_sym_header_definition_token1,
  [119] = 3,
    ACTIONS(35), 1,
      aux_sym_header_definition_token1,
    ACTIONS(37), 1,
      sym_item_definition,
    STATE(15), 1,
      aux_sym_row_definition_repeat1,
  [129] = 3,
    ACTIONS(39), 1,
      sym_comment_definition,
    ACTIONS(42), 1,
      sym_column_definition,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
  [139] = 2,
    ACTIONS(46), 1,
      sym_item_definition,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      aux_sym_header_definition_token1,
  [147] = 3,
    ACTIONS(48), 1,
      aux_sym_header_definition_token1,
    ACTIONS(50), 1,
      sym_column_definition,
    STATE(13), 1,
      aux_sym_header_definition_repeat1,
  [157] = 2,
    ACTIONS(55), 1,
      sym_item_definition,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_header_definition_token1,
  [165] = 3,
    ACTIONS(57), 1,
      aux_sym_header_definition_token1,
    ACTIONS(59), 1,
      sym_item_definition,
    STATE(15), 1,
      aux_sym_row_definition_repeat1,
  [175] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 129,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 157,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 175,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(7),
  [5] = {.count = 1, .reusable = true}, SHIFT(8),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [9] = {.count = 1, .reusable = true}, SHIFT(9),
  [11] = {.count = 1, .reusable = false}, SHIFT(10),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [20] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_row_definition, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_row_definition, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = false}, SHIFT(15),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_header_definition, 2),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_header_definition, 2),
  [48] = {.count = 1, .reusable = true}, REDUCE(aux_sym_header_definition_repeat1, 2),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_header_definition_repeat1, 2), SHIFT_REPEAT(13),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_row_definition, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_row_definition, 2),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_row_definition_repeat1, 2),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_row_definition_repeat1, 2), SHIFT_REPEAT(15),
  [62] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Tablatal(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
