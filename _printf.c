#include "main.h"
/**
 * _printf - is a function that selects.
 * @format: function parameter
 * Return: length.
 */
int _printf(const char * const format, ...)
{
convert_match m[] =
{
{"%s", print_string}, {"%c", print_character},
{"%%", print_percent},
{"%i", print_int}, {"%d", print_dec}, {"%r", print_srev},
{"%R", print_rot13}, {"%b", print_binary}, {"%u", print_unsigned},
{"%o", print_octal}, {"%x", printf_hex}, {"%X", printf_HEX},
{"%S", print_excl_str}, {"%p", print_pointer}
};

va_list args;
  
int i = 0, j, len = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
while (format[i] != '\0')
{
j = 13;

while (j >= 0)
{
if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
{
len += m[j].f(args);
i = i + 2;
goto Here;
}
j--;
}
_putchar(format[i]);
len++;
i++;
}
va_end(args);
return (len);
}
