#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char a);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int wrdcnt(char *s);
char **strtow(char *str);
#endif
