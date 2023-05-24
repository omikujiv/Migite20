// Copyright 2023 omikujiv (@omikujiv)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// Encorder pins
#define ENCODERS_PAD_A { F4, F6, B1 }
#define ENCODERS_PAD_B { F5, F7, B3 }

#define ENCODER_RESOLUTIONS { 2, 2, 4}