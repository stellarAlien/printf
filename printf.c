#include "main.h"

/**
* print_char - prints char from the va_list
* print_string - prints a string parameter from a va_list
* @ap: va_list from calling function
* Return: integer count of characters printed
*/
int print_char(va_list ap)
{
         return (_putchar(va_arg(ap, int)));
}

int print_string(va_list ap)
{
         char *str = va_arg(ap, char *);
         int count = 0;
  
         if (!str)
                 str = "(null)";
         while (str[count] != '\0')
                 count += _putchar(str[count]);
  
         return (count);
} // by Omar Cherni & Saif Gaida
