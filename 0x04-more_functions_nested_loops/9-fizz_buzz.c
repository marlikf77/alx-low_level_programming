#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description - print 0 to 100 but with multiples with
 * Fizz for 5 multiples and Buzz for 3 multiples
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
