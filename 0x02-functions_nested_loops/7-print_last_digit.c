#include "main.h"
/**
 * print_last_digit - prints the last digit pf a number
 * @c: the number to be checked
 * Return: last digit of a numbeir
 */
int print_last_digit(int c)
{
int k;
k = c % 10;
if (k < 0)
{
k = (k * -1);
}
{
_putchar(k + '0');
}
return (k);
}

