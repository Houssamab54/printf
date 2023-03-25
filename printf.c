#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *          s: char * (if the string is NULL, print (nil) instead)
 * Return: void.
 */
 
int _printf(const char *format, ...)
{
	va_list args;
	char c , *s;
	int i, printed = -1;
	
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
    				_putchar((char) va_arg(args, int));
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
    			_putchar(format[i]);
    		    printed++;
    		    i++;
    		}
	    }
	va_end(args);
	return printed;
}
