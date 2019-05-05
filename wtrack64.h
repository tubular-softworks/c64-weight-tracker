/* Weight Tracker 64
 *
 * Copyright (C) 2019 Sauli Hirvi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "global.h"
#include "config.h"
#include "tokens.h"
#include "files.h"

#ifndef __wtrack64_h_
#define __wtrack64_h_


/* Function prototypes */
unsigned char View_main_menu(void);
void View_dir_list(void);
unsigned char View_dir_list_menu(struct Files *);
void View_new_entry(void);
void cleanup(void);

unsigned int Input_get_integer(void);
unsigned int Input_get_decimal(void);
unsigned int Input_parse_decimal(unsigned char *);
unsigned int Input_validate_decimal(unsigned char *);

void Entry_parse(unsigned char *, struct Entry *);
void Entry_print(struct Entry *);
void Entry_save_month(unsigned int, unsigned char);
void Entry_save(struct Entry *);
struct Entry *Entry_find(struct Date *);
void Entry_swap(struct Entry *, struct Entry *);
void Entry_sort(struct Entries *);
char *Entry_format_weight(unsigned int);
bool Entry_validate(struct Entry *);
unsigned char *Entry_to_csv(struct Entry *);

void Date_increment(struct Date *);
struct Date *Date_parse_filename(unsigned char *);
#endif
