#include "main.h"
/**
 * _isalpha - checks the alphabetic character
 * @c: the letter to be checked
 * Return: 1 if is a letter, lowercase or uppercase and 0 when otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 95) || (c >= 97 && c <= 122))
{
return (1);
}
{
return (0);
}
}

