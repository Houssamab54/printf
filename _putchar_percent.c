#include <unistd.h>
#include "main.h"

/**
 *  _putchar_percent - writes the character % to stdout
 * @np: fits type call 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_percent(__attribute__((unused))va_list no)
{
    char c;
    c = '%';
	return (write(1, &c, 1));
}
