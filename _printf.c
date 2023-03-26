#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - Prints anything.
 * @format: string that may contains %+specifiers
 *          c: char
 *          s: char*
 *          %: char*
 * Return: lenght.
 */
int _printf(const char *format, ...)
{
speecifiers speclist[] = {
{"c", _getchar},
{"s", _puts},
{"%", _putchar_percent},
{NULL, NULL}
};
va_list args;
int printed;
printed = 0;
if (format == NULL)
return (-1);
}
va_start(args, format);
printed = readstring(format, speclist, args);
va_end(args);
return (printed);
}
