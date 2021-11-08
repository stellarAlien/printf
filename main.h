#ifindef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>

/**
 * struct printf - struct printf
 * @c: The character
 * @f: The function associated
 */
typedef struct printf
{
	char c;
	int (*fun)(va_list);
} printf_t;
int _printf(const char *format, ...);

#endif //MAIN_H
