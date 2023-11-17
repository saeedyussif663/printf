#include "main.h"

/**
 * print_pointer - a function that prints a hex num
 * @val: function parameter.
 * Return: cout.
 */
int print_pointer(va_list val)
{
void *p;
char *s = "(nil)";
long int a;
int b;
int i;

p = va_arg(val, void*);
if (p == NULL)
{
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
return (i);
}

a = (unsigned long int)p;
_putchar('0');
_putchar('x');
b = printf_hex_aux(a);
return (b + 2);
}