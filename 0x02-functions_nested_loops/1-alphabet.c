#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print alphabet(void)
{

char alpha;
alpha = 'a';
while (alpha <= 'z')
{
alpha++;
_putchar(alpha);
}
_putchar('\n');
}
