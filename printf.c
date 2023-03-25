#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints output according to a format.
 * @format: format string.
 * Return: the number of characters printed (excluding the null byte).
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
					char c = (char)va_arg(arg, int);
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

	return (printed_chars);
}
