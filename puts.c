#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: a pointer to a string.
 *
 * Return: void.
 */
int _puts(char *str)
{
    int i;
    i =0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
return i;
}
