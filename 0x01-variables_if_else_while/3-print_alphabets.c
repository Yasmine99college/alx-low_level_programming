#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char min='a';
	char cap='A';
	while(min<='z')
	{
		putchar(min);
		min++;
	}
	while(cap<='Z')
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
