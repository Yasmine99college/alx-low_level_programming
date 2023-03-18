#include <stdlib.h>
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
			continue;
		}
		else
		{
			putchar(alph);
			putchar('\n');
		}
	}
	return (0);
}
