#include "main.h"

/**
 * printf_character - the function prints a character
 * @value: function parameter.
 * Return: 1 Always.
 */
int print_character(va_list value)
{
char c;

c = va_arg(value, int);
_putchar(c);
return (1);
}