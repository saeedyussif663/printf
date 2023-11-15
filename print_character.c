#include "main.h"

/**
 * print_character - prints a char.
 * @value: arguments.
 * Return: 1.
 */
int print_character(va_list value)
{
char a;

a = va_arg(value, int);
_putchar(a);
return (1);
}