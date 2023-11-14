#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf_list(va_list val, char ch, unsigned int *p_i);
int _putchar(char c);
int print_c(int character);
int print_s(char *str);
int print_p(void);
int sr_print(char *str);
int _printf(char *format, ...);
void id_print(int n);
int count_int(int n);
#endif


