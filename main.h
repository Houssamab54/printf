#ifndef main_H
#define main_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - a type with function to specifier
*
* @coversionspec: the character
* @func: the function that handles the char
*/
struct specifier
{
	char *coversionspec;
	int (*func)(va_list);
};
typedef struct specifier specifiers;

int _printf(const char *format, ...);

int readstring(const char *format, specifiers f_list[], va_list args);

int _putchar(char c);

int _getchar(va_list);

int _puts(va_list);

int _putchar_percent(va_list);

#endif /* main_H */
