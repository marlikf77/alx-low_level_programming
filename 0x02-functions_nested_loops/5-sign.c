#include "main.h"
/**
 * print_sign - orints sign of a number
 * @n: number to be checked
 * Return: 1 when greater than 0, -1 when less than 0, o if otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}

