#include <stdlib.h>
#include <stdio.h>
/**
 * main -  Block
 * Description: print the alphabet in lowercase
 * and then in uppercase, followed by a new line
 * return: 0
 */

int main(void)
{	
	char c = 'a';
	while (c < '2')
	{	
		putchar(c);
		c++;
	}
	c = 'a';
	while (c < '2')
	{	
		putchar(c);
		c++;
	}
	putchar ('\n');
	return (0);
}
