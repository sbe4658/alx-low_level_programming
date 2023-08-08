#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int, char);
int _strlen(char *);
char *_strdup(char *);
int _strnlen(char *, char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);

#endif
