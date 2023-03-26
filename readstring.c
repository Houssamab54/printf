#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * readstring - _printf handler.
 * @format: string that may contains %+specifiers
 *          c: char
 *          s: char*
 *          %: char*
 * @f_list: list of specifiers
 * @args: argument
 * Return: lenght.
 */
 int readstring(const char *format, specifiers f_list[], va_list args)
 {
     int i, j, fail, printed;
     printed = 0;
     for (i = 0; format[i] != '\0'; i++)
     {
        if (format[i] == '%')
        {
            for (j = 0; f_list[j].coversionspec != NULL; j++)
            {
                if (format[i + 1] == f_list[j].coversionspec[0])
                {
                    fail = f_list[j].func(args);
					if (fail == -1)
						return (-1);
					printed += fail;
					i = i + 1;
					break;
                }}
                if (f_list[j].coversionspec == NULL && format[i + 1] != ' ')
                {
                    if (format[i + 1] != '\0')
                    {
                        _putchar('%');
                        _putchar(format[i + 1]);
                        printed = printed + 2;
			i = i + 1;
                    }
                    else
                    {
                        return (-1);
                    }
            }
        }
        else
        {
            _putchar(format[i]);
            printed++;
		}
	}
	return (printed);
}
