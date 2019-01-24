#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 17
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment_definition = 1,
  aux_sym_SLASH_BSLASHn_SLASH = 2,
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
  [ts_builtin_sym_end] = "END",
  [sym_comment_definition] = "comment_definition",
  [aux_sym_SLASH_BSLASHn_SLASH] = "/\\n/",
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

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_definition] = {
    .visible = true,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '~')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(5);
      ADVANCE(6);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment_definition);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment_definition);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment_definition);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_column_definition);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_item_definition);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '~')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment_definition);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_column_definition);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      ADVANCE(6);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHn_SLASH);
      END_STATE();
    case 13:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(9);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_definition] = ACTIONS(1),
    [sym_column_definition] = ACTIONS(3),
    [sym_item_definition] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(2),
    [sym_header_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_header_definition_repeat1] = STATE(5),
    [sym_comment_definition] = ACTIONS(5),
    [sym_column_definition] = ACTIONS(7),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [3] = {
    [sym_row_definition] = STATE(7),
    [aux_sym_source_file_repeat2] = STATE(7),
    [aux_sym_row_definition_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(13),
    [sym_item_definition] = ACTIONS(15),
  },
  [4] = {
    [sym_header_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_header_definition_repeat1] = STATE(5),
    [sym_comment_definition] = ACTIONS(17),
    [sym_column_definition] = ACTIONS(7),
  },
  [5] = {
    [aux_sym_header_definition_repeat1] = STATE(12),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(19),
    [sym_column_definition] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(23),
    [sym_item_definition] = ACTIONS(25),
  },
  [7] = {
    [sym_row_definition] = STATE(13),
    [aux_sym_source_file_repeat2] = STATE(13),
    [aux_sym_row_definition_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(13),
    [sym_item_definition] = ACTIONS(15),
  },
  [8] = {
    [aux_sym_row_definition_repeat1] = STATE(15),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(29),
    [sym_item_definition] = ACTIONS(31),
  },
  [9] = {
    [sym_row_definition] = STATE(16),
    [aux_sym_source_file_repeat2] = STATE(16),
    [aux_sym_row_definition_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(13),
    [sym_item_definition] = ACTIONS(15),
  },
  [10] = {
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_comment_definition] = ACTIONS(33),
    [sym_column_definition] = ACTIONS(36),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(38),
    [sym_item_definition] = ACTIONS(40),
  },
  [12] = {
    [aux_sym_header_definition_repeat1] = STATE(12),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(42),
    [sym_column_definition] = ACTIONS(44),
  },
  [13] = {
    [sym_row_definition] = STATE(13),
    [aux_sym_source_file_repeat2] = STATE(13),
    [aux_sym_row_definition_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(49),
    [sym_item_definition] = ACTIONS(52),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(55),
    [sym_item_definition] = ACTIONS(57),
  },
  [15] = {
    [aux_sym_row_definition_repeat1] = STATE(15),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(59),
    [sym_item_definition] = ACTIONS(61),
  },
  [16] = {
    [sym_row_definition] = STATE(13),
    [aux_sym_source_file_repeat2] = STATE(13),
    [aux_sym_row_definition_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym_SLASH_BSLASHn_SLASH] = ACTIONS(13),
    [sym_item_definition] = ACTIONS(15),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = false}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_row_definition, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_row_definition, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = false}, SHIFT(15),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_header_definition, 2),
  [40] = {.count = 1, .reusable = false}, REDUCE(sym_header_definition, 2),
  [42] = {.count = 1, .reusable = true}, REDUCE(aux_sym_header_definition_repeat1, 2),
  [44] = {.count = 2, .reusable = false}, REDUCE(aux_sym_header_definition_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [52] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_row_definition, 2),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_row_definition, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(aux_sym_row_definition_repeat1, 2),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_row_definition_repeat1, 2), SHIFT_REPEAT(15),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
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
