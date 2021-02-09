#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 * @c : variable for the letter
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise.
 */

int _isalpha(int c);
{
if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
{
return (1);
}
else 
{
return (0);
}
_putchar('\n');
}
