/*
 * Copyright (C) 2003-2012 The Music Player Daemon Project
 * http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPD_CLOCK_H
#define MPD_CLOCK_H

#include "gcc.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Returns the value of a monotonic clock in milliseconds.
 */
gcc_pure
unsigned
monotonic_clock_ms(void);

/**
 * Returns the value of a monotonic clock in microseconds.
 */
gcc_pure
uint64_t
monotonic_clock_us(void);

#ifdef __cplusplus
}
#endif

#endif
