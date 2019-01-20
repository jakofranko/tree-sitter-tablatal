#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 13
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_BSLASHn_SLASH = 1,
  sym_column_definition = 2,
  sym_item_definition = 3,
  sym_source_file = 4,
  sym_header_definition = 5,
  sym_row_definition = 6,
  aux_sym_source_file_repeat1 = 7,
  aux_sym_header_definition_repeat1 = 8,
  aux_sym_row_definition_repeat1 = 9,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_BSLASHn_SLASH] = "/\\n/",
  [sym_column_definition] = "column_definition",
  [sym_item_definition] = "item_definition",
  [sym_source_file] = "source_file",
  [sym_header_definition] = "header_definition",
  [sym_row_definition] = "row_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_header_definition_repeat1] = "header_definition_repeat1",
  [aux_sym_row_definition_repeat1] = "row_definition_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_BSLASHn_SLASH] = {
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
  [aux_sym_header_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(3);
      ADVANCE(4);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_column_definition);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_item_definition);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_column_definition);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(8);
      ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(1),
    [sym_column_definition] = ACTIONS(3),
    [sym_item_definition] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(2),
    [sym_header_definition] = STATE(3),
    [aux_sym_header_definition_repeat1] = STATE(4),
    [sym_column_definition] = ACTIONS(5),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(7),
  },
  [3] = {
    [sym_row_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_row_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(11),
    [sym_item_definition] = ACTIONS(13),
  },
  [4] = {
    [aux_sym_header_definition_repeat1] = STATE(9),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(15),
    [sym_column_definition] = ACTIONS(17),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(19),
    [sym_item_definition] = ACTIONS(21),
  },
  [6] = {
    [sym_row_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_row_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(11),
    [sym_item_definition] = ACTIONS(13),
  },
  [7] = {
    [aux_sym_row_definition_repeat1] = STATE(12),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(25),
    [sym_item_definition] = ACTIONS(27),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(29),
    [sym_item_definition] = ACTIONS(31),
  },
  [9] = {
    [aux_sym_header_definition_repeat1] = STATE(9),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(33),
    [sym_column_definition] = ACTIONS(35),
  },
  [10] = {
    [sym_row_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_row_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(38),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(40),
    [sym_item_definition] = ACTIONS(43),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(46),
    [sym_item_definition] = ACTIONS(48),
  },
  [12] = {
    [aux_sym_row_definition_repeat1] = STATE(12),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(50),
    [sym_item_definition] = ACTIONS(52),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_row_definition, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_row_definition, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_header_definition, 2),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_header_definition, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_header_definition_repeat1, 2),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_header_definition_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_row_definition, 2),
  [48] = {.count = 1, .reusable = false}, REDUCE(sym_row_definition, 2),
  [50] = {.count = 1, .reusable = true}, REDUCE(aux_sym_row_definition_repeat1, 2),
  [52] = {.count = 2, .reusable = false}, REDUCE(aux_sym_row_definition_repeat1, 2), SHIFT_REPEAT(12),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Tablatal() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
