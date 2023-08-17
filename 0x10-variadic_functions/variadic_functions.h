#ifndef VARF_H
#define VARF_H

/* Header's section */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * ui_t - synonim.
 */
typedef unsigned int ui_t;

/* Function's section */
int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const ui_t, ...);

#endif
