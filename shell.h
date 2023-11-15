#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
void _puts(char *str);
unsigned int nbr_spaces(char *s);
char **stringToTokens(char *str);

#endif
