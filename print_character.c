#include "main.h"

/**
 * print_character - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int print_character(va_list val)
{
char a;

a = va_arg(val, int);
_putchar(a);
return (1);
}