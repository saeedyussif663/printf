#include "main.h"

/**
 * _putchar - writes the character c to standard output
 * @c: The character to print to standard output
 * Return: On success 1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}