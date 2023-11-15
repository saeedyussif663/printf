#include "main.h"
/**
 * print_string - a function that prints a string.
 * @val: function parameter.
 * Return: len.
 */

int print_string(va_list val)
{
char *x;
int i, length;
x = va_arg(val, char *);
if (x == NULL)
{
x = "(null)";
length = _strlen(x);
for (i = 0; i < length; i++)
_putchar(x[i]);
return (length);
}
else
{
length = _strlen(x);
for (i = 0; i < length; i++)
_putchar(x[i]);
return (length);
}
}

