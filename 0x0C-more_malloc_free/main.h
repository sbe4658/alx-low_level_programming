#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *, char *, unsigned int);
int _strlen(char *);
void *_calloc(unsigned int, unsigned int);
char *_memset_to_0(char *, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_memset_0(char *, unsigned int);

#endif
