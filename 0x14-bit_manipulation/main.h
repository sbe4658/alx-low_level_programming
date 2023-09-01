#ifndef MAIN_H
#define MAIN_H

/* Header's section */
#include <stdio.h>

/* Function's section */
unsigned int binary_to_uint(const char *);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
