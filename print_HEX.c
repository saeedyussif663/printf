#include "main.h"

/**
 * printf_HEX - a function.
 * @val: function parameter.
 * Return: The count.
 */
int printf_HEX(va_list val)
{
int i;
int *arr;
int count = 0;
unsigned int num = va_arg(val, unsigned int);
unsigned int temp = num;

while (num / 16 != 0)
{
num /= 16;
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
arr[i] = arr[i] + 7;
_putchar(arr[i] + '0');
}
free(arr);
return (count);
}
