#include "main.h"

/**
 * print_character -a function.
 * @val: function parameter.
 * Return: Success.
 */
int print_character(va_list val)
{
char a;

a = va_arg(val, int);
_putchar(a);
return (1);
}

