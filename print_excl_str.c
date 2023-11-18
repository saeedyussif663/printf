#include "main.h"
/**
 * print_excl_str - a function.
 * @val: function parameter.
 * Return:Success (length).
 */

int print_excl_str(va_list val)
{
char *s;
int i, length = 0;
int cas;

s = va_arg(val, char *);
if (s == NULL)
s = "(null)";
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] < 32 || s[i] >= 127)
{
_putchar('\\');
_putchar('x');
length = length + 2;
cas = s[i];
if (cas < 16)
{
_putchar('0');
length++;
}
length = length + printf_HEX_aux(cas);
}
else
{
_putchar(s[i]);
length++;
}
}
return (length);
}
