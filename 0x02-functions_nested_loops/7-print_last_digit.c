#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : variable for number to be printed
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
if (n < 0)
n *= -1;
_putchar('0' + (n % 10));
return (n % 10);
_putchar('\n');
}
