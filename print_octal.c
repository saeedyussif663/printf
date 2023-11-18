#include "main.h"

/**
 * print_octal - a function.
 * @val: function parameter.
 * Return: Success (count).
 */
int print_octal(va_list val)
{
int i;
int *arr;
int count = 0;
unsigned int number = va_arg(val, unsigned int);
unsigned int temp = number;

while (number / 8 != 0)
{
number /= 8;
count++;
}
count++;
arr = malloc(count * sizeof(int));

for (i = 0; i < count; i++)
{
arr[i] = temp % 8;
temp /= 8;
}
for (i = count - 1; i >= 0; i--)
{
_putchar(arr[i] + '0');
}
free(arr);
return (count);
}
