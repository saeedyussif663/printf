#include "main.h"

/**
 * print_binary - a function that prints a binary number.
 * @val: parameter.
 * Return: 1 (Always).
 */
int print_binary(va_list val)
{
int flag = 0;
int counter = 0;
int i, a = 1, b;
unsigned int number = va_arg(val, unsigned int);
unsigned int p;

for (i = 0; i < 32; i++)
{
p = ((a << (31 - i)) & number);
if (p >> (31 - i))
flag = 1;
if (flag)
{
b = p >> (31 - i);
_putchar(b + 48);
counter++;
}
}
if (counter == 0)
{
counter++;
_putchar('0');
}
return (counter);
}