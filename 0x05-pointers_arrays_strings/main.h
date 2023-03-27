#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <stdlib.h>

#define PWD_LEN 26

int _strlen(char *s);
int _putchar(char c);
int _atoi(char *s);

char *_strcpy(char *dest, char *src);

void reset_to_98(int *n);
void swap_int(int *a, int *b);
void print_rev(char *s);
void puts2(char *str);
void puts_half(char *str); 
void print_array(int *a, int n);

#endif
