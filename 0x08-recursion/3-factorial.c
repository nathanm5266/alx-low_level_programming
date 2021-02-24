#include "holberton.h"

/**
 * factorial - function for calculating factorial
 * @n: variable to be calculated
 * Return: result of factorial
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if
(n == 0 || n == 1)
return (1);
else
return (n * factorial(n - 1));
}
