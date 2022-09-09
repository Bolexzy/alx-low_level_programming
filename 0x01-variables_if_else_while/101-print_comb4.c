#include <stdio.h>

/**
* main - Prints all possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k<= '9'; k++)
			{
				if (!(k <= j || j <= i))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!( i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
