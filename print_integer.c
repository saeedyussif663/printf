#include "main.h"
/**
 * print_int - a function that prints an integer
 * @args: parameter
 * Return: number of charas
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
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

/**
 * print_dec - a function that prints decimal
 * @args: parameter
 * Return: numberber of charas
 */

int print_dec(va_list args)
{
int n = va_arg(args, int);
int number, last = n % 10, digit;
int  i = 1;
int exp = 1;

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