#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: character to be checked
 * Return: 1 when success or 0 for otherwise
 */
int  _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

