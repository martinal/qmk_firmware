#pragma once

// https://docs.qmk.fm/tap_hold
// default 200 is too long for caps as esc
// 90 too short
// 120 ok for capslock, too short for tab
// 150 seems to work ok
#define TAPPING_TERM 150

// finetuning per-key config, see get_tapping_term in keymap.c
#define TAPPING_TERM_PER_KEY

#define PERMISSIVE_HOLD

// #define UNICODE_SELECTED_MODES UNICODE_MODE_BSD, UNICODE_MODE_MACOS, UNICODE_MODE_LINUX
