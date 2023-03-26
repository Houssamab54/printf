#include "main.h"

/**
 * print_int - prints an int
 * @args: arguments
 * Return: number of digits printed
 */
int print_int(va_list args)
{
int n, len, div;
unsigned int num;
len = 0;
n  = va_arg(args, int);
div = 1;

if (n < 0)
{
len += _putchar('-');
num = n * -1;
}
else
{
num = n;
}
while (num / div > 9)
{
div *= 10;
}
while (div != 0)
{
len += _putchar('0' + num / div);
num = num % div;
div = div / 10;
}
return (len);
}
