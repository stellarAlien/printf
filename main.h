#ifndef MAIN_H_
#define MAIN_H_
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * struct printf - struct printf
 * @c: The character
 * @fn: The function associated
 */
typedef struct cast
{
	char c;
	int (*fun)(va_list);
} printf_t;

int _putchar(char c);
int _strlen(const char *format, ...);
static int (*check_for_specifiers(const char *format))(va_list)
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_space(va_list ap);
int print_int(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);
int print_digit(int num, int*count);
int print_unsigned_digit(unsigned int num, int *count);
int print_digit_octal(unsigned int num, int *count);
int call_print_fn(char ch, va_list ap);
char *_itoa(int d);
char *pchr(va_list ap);
char *pstr(va_list ap);
char *pper(va_list ap);
char *pint(va_list ap);

#endif //MAIN_H_
