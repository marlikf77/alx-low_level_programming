#include "main.h"

/**
 * print_alphabet_x10 - print ten times in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
char i;
int b;
b = 0;
while (b < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
b++;
}
}
