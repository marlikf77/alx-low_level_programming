#include "main.h"
/**
 * more_numbers - prints multiple times of numbers
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 14; i++)
	{
		for (i = 0; j <= 10; j++)
		{
			if (j >= 10)
			_putchar('1');
		_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
