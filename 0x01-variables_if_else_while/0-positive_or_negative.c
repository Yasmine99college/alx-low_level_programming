#include<unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *    ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: This time we return an error 1.
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n==0)
	{
		printf("%d is zero\n",n);
	}
	else if(n>0)
	{
		printf("%d is positive\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	return (0);
}
