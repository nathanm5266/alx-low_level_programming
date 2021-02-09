#include "holberton.h"

/**
 * print_sign - checks the sign of a number.
 * @n : a variable to be checked
 * Return: 1 if n is > zero and 0 if n is zero and -1 if n is < 0
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
_putchar('\n');
}
