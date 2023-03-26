#include <unistd.h>
#include "main.h"

/**
 *  _putchar_percent - writes the character % to stdout
 * @no: fits type call
 * Return: On success 1.
 */
int _putchar_percent(__attribute__((unused))va_list no)
{
char c;

c = '%';
return (write(1, &c, 1));
}
