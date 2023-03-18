#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alph='a';
	while(alph<='z')
	{
		if(alph=='q'||alph=='e')
		{
			alph++;
		}
		else
		{
			putchar(alph);
			alph++;
			
		}
	}
	putchar('\n');
	return (0);
}
