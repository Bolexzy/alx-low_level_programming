#include <stdio.h>

/**
* main - Prints numbers between 00 to 99.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, last;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			last = !(i == 98 && j == 99);
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (last)
			{
				putchar(',');
				putchar(' ');
			}
			j++;

		}
		i++;

	}

	putchar('\n');
	return (0);
}
