#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: arg string.
 * Return: len.
 */
int _puts(va_list str)
{
    int i;
    char *strig;
    i =0;
    strig = va_arg(str, char *);
	if (strig == NULL)
		strig = "(null)";
	for (i = 0; strig[i] != '\0'; i++)
		_putchar(strig[i]);
	return (i);
}
