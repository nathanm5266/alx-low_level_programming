#include "holberton.h"

/**
 * print_alphabet - check the code for alphabets.
 * Return: Always 0.
 */
void print_alphabet(void)

{

char alpha;
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
