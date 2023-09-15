#include "main.h"
/**
 * _isupper - checks for upper case alphabet
 * @c: the parameter being tested
 * Return: 1 when success and 0 if failed
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
