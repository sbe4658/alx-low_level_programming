#ifndef CALC_H
#define CALC_H

/* Header's sectio */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Fonction's section */
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - struct op.
 *
 * @op: The operator sign.
 * @f: Pointer to the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
