#ifndef MAIN_H
#define MAIN_H

/* Headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Functions */
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);

#endif
