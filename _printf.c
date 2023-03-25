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
	specifiers speclist[]={
        {"c", _putchar},
		{"s", _puts},
		{"%", _putchar_percent},
		{NULL, NULL}
	};
	va_list args;
	int i, printed;
	printed = 0;
	
	if (format == NULL)
	{
	    return (-1);
	}
	va_start(args, format);
	printed = readstring(*format,speclist,args);
	va_end(arg_list);
	return printed;
}
