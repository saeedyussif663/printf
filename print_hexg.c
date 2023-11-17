#include "main.h"

/**
 * print_hex -a function that prints a hex number.
 * @val: function parameter.
 * Return: count.
 */
int print_hex(va_list val)
{
int i;
int *arr;
int count = 0;
unsigned int number = va_arg(val, unsigned int);
unsigned int temp = number;

while (number / 16 != 0)
{
number /= 16;
count++;
}
count++;
arr = malloc(count * sizeof(int));

for (i = 0; i < count; i++)
{
arr[i] = temp % 16;
temp /= 16;
}
for (i = count - 1; i >= 0; i--)
{
if (arr[i] > 9)
arr[i] = arr[i] + 39;
_putchar(arr[i] + '0');
}
free(arr);
return (count);
}