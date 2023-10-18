#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int _printf(const char *format, ...);
void print_char(char c);
void print_string(const char *str);
int print_int(int num);
int str_len(const char *str);
int binary_conv(unsigned int num);
void print_rev(const char *str);
#endif
