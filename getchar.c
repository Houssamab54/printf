#include "main.h"
/**
 * _getchar - gets character to print
 * @arg: arguments
 * Return: len printed
 */
int _getchar(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
