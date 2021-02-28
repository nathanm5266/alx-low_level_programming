#include "holberton.h"

/**
 * _memset - a function that fills with constant memory byte
 * @s: string to be listed
 * @b: character b
 * @n: intiger to be accepted
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
int size = n;
if (size > 0)
{
int i;
for (i = 0; i <= size; i++)
s[i] = b;
}
return (s);
}
