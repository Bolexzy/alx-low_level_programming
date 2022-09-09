#include <stdio.h>

/**
* main - Prints all single digits of base 10 start from 0.
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	putchar('\n');
	return (0);
}
