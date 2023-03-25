#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 * Return: void.
 */
int _printf(const char *format, ...)
{
	va_list args;
	char c ;
	char *s;
	int i, printed;
	if (format == NULL)
	{
	    return (-1);
	}
	va_start(args, format);
	while (format && format[i])
	{
	    if(format[i] == '%')
	    {
    		switch (format[i+1])
    		   {
    		       case '%':
                    _putchar('%');
    				i+=2;
    				printed++;
                    break;
    			case 'c':
    			    c = (char) va_arg(args, int);
    				_putchar(c);
    				i+=2;
    				printed++;
    				break;
    			case 's':
    				s = va_arg(args, char *);
    				if (s == NULL)
    				{
    				    i+=2;
    					break;
    				}
    				printed+=_puts(s);
    				 i+=2;
    				break;
    			default:
    			    _putchar('%');
    				i++;
    				continue;
    		   }
    		}
    		else
    		{
    		    c = format[i];
    			_putchar(c);
    		    printed++;
    		    i++;
    		}
	    }
	va_end(args);
	return printed;
}
