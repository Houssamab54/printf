#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - custom implementation of printf function
 * @format: string with format specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list arg;
    int printed_chars = 0;

    va_start(arg, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                {
                    char c = (char) va_arg(arg, int);
                    putchar(c);
                    printed_chars++;
                    break;
                }
                case 's':
                {
                    char *s = va_arg(arg, char *);
                    if (s == NULL)
                    {
                        fputs("(null)", stdout);
                        printed_chars += 6;
                    }
                    else
                    {
                        while (*s)
                        {
                            putchar(*s);
                            s++;
                            printed_chars++;
                        }
                    }
                    break;
                }
                case '%':
                {
                    putchar('%');
                    printed_chars++;
                    break;
                }
            }
        }
        else
        {
            putchar(*format);
            printed_chars++;
        }
        format++;
    }
    va_end(arg);

    return printed_chars;
}
