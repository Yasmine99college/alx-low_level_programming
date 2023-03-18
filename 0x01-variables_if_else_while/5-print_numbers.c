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
	int d = 0;
	while(d <= 9)
	{
		printf("%d" ,d);
		d++;
	}
	printf("\n");
       	return (0);
}
