#include "main.h"
/**
 * print_line - prints straight lines
 * @n: no of times
 * Return: 0 always
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
	_putchar('_');
}
_putchar('\n');
}
