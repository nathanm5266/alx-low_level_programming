#include "holberton.h"


/**
 * _abs - check the absolute value of a number.
 * @n: intiger bariable
 * Return: the absolute value of a number
 */

int _abs(int n)
{
if (n > 0)
return (n);
else if (n < 0)
return (-n);
return (0);
}
