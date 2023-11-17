#include "main.h"

/**
 * printf_HEX_aux - a function that prints a hex num
 * @num: function parameter.
 * Return: count.
 */
int printf_HEX_aux(unsigned int num)
{
int i;
int *arr;
int count = 0;
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