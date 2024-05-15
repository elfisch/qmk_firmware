#pragma once

#define TAPPING_TERM 150

// Sends qmk compile -kb (keyboard) -km (keymap), or qmk flash if shift is held.
// Puts keyboard into bootloader mode if shift & control are held.
#define ENABLE_COMPILE_KEYCODE

// #define FORCE_NKRO