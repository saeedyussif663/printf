#include "main.h"

/**
 * _putchar - writes character
 * @c: The character
 *
 * Return:success.
 * -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
