#include "holberton.h"

/**
 * more_numbers - displays numbers from 0 to 14 10 times
 */

void more_numbers(void)
{
char counter;
char num;
for (counter = '0'; counter <= 10; counter++)
{
for (num = '0'; num <= 14; num++)
_putchar(num);
}
_putchar('\n');
}
