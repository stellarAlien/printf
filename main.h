#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @fun: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conv_t;
int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list);
int _print_string(va_list);
int _print_percent(va_list);
int print(const char *format, conv_t funcs[], va_list args);
int _print_int(va_list args);
#endif //by Omar Cherni & Saif Gaida
