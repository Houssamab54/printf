#include "main.h"
/**
 * getchar - gets character to print
 * @arg: arguments
 * Return: len printed
 */
int getchar(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
