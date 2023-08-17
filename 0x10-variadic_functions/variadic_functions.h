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

/**
 * struct types - types struct.
 *
 * @t: characater.
 * @f: function pointer.
 */
typedef struct types
{
	char t;
	void (*f)(va_list);
} type_t;

/* Function's section */
int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const ui_t, ...);
void print_strings(const char *, const ui_t, ...);
void print_all(const char * const, ...);
void print_char(va_list);
void print_int(va_list);
void print_f(va_list);
void print_s(va_list);
void (*search(char))(va_list);

#endif
