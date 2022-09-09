#include <stdio.h>

/**
* main - Prints the lowercase alphabets in reverse.
*
* Return: always 0 (Success)
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
