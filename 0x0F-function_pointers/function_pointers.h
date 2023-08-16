#ifndef FP_H
#define FP_H

/* Header's section */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Function's section */
void print_name(char *, void (*)(char *));
void print_name_uppercase(char *name);
void print_name_as_is(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem_hex(int);
void print_elem(int);


#endif
