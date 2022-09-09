#include <stdio.h>

/**
* main - Prints all possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (!(j <= i))
			{
				putchar(i);
				putchar(j);
				if (!(i == '8' && j == '9'))
				{
				putchar(44);
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
