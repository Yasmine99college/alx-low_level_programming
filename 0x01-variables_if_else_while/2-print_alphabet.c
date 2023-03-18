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
	char alph='a';
	while(alph<='z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
