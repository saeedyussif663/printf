#include "main.h"

/**
 * print_srev - function that prints a reverse string
 * @args: function parameter
 * Return: str
 */
int print_srev(va_list args)
{

char *s = va_arg(args, char*);
int i;
int j = 0;

if (s == NULL)
s = "(null)";
while (s[j] != '\0')
j++;
for (i = j - 1; i >= 0; i--)
_putchar(s[i]);
return (j);
}