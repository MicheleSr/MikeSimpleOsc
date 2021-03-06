/*  notes.h implementation of active notes buffer

    Copyright (C) 2014-2015 Michele Sorcinelli

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include "data.h"

#define NOTE_ZERO { .id = 255, .vel = 0 }

typedef struct note {
  unsigned char id, vel;
} note_t;

extern bool_t active_notes_is_empty();
extern unsigned char del_active_note(unsigned char);
extern void add_active_note(note_t);
extern void active_notes_init();
extern note_t get_note_by_id(unsigned char);
extern note_t search_highest_active_note();
