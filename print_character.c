#include "main.h"

/**
 * print_character -a function that prints a character
 * @val: function parameter.
 * Return: 1 always.
 */
int print_character(va_list val)
{
char a;

a = va_arg(val, int);
_putchar(a);
return (1);
}

