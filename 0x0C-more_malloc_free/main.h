#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *, char *, unsigned int);
int _strlen(char *);
void *_calloc(unsigned int, unsigned int);

#endif
