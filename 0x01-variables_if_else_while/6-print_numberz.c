#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
