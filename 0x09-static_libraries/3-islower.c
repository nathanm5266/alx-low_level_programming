#include "holberton.h"

/**
 * _islower - check the code for is lower case or not.
 * @c : the variable character to check
 * Return: 1 if it is a lower case if not 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
