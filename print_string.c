#include "main.h"
/**
 * print_string - a function that prints a string.
 * @val: function parameter.
 * Return: len.
 */

int print_string(va_list val)
{
char *s;
int i, len;
s = va_arg(val, char *);
if (s == NULL)
{
s = "(null)";
len = _strlen(s);
for (i = 0; i < len; i++)
_putchar(s[i]);
return (len);
}
else
{
len = _strlen(s);
for (i = 0; i < len; i++)	
_putchar(s[i]);
return (len);
}
}