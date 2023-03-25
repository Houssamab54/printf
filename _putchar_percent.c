#include <unistd.h>
#include "main.h"

/**
 *  _putchar_percent - writes the character % to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_percent()
{
    char c;
    c = '%';
	return (write(1, &c, 1));
}
