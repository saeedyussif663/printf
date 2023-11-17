#include "main.h"
/**
 * print_unsigned - a function that prints an integer
 * @args: parameter
 * Return: number of chars
 */
int print_unsigned(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int number, last = n % 10, digit, exp = 1;
int  i = 1;

n = n / 10;
number = n;

if (last < 0)
{
_putchar('-');
number = -number;
n = -n;
last = -last;
i++;
}
if (number > 0)
{
while (number / 10 != 0)
{
exp = exp * 10;
number = number / 10;
}
number = n;
while (exp > 0)
{
digit = number / exp;
_putchar(digit + '0');
number = number - (digit * exp);
exp = exp / 10;
i++;
}
}
_putchar(last + '0');

return (i);
}