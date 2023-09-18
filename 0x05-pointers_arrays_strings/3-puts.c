#include "main.h"
/**
 * _puts - prints a string followed by a line
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
		_putchar('\n');
	}
}
