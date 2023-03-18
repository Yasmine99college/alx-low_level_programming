#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	char min = 'a';
	char cap = 'A';
	while(min <= 'z')
	{
		putchar(min);
		min++;
	}
	while(cap <= 'Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
