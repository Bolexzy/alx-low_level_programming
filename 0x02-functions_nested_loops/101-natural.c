#include <stdio.h>

/**
* main - Prints natural numbers below 1024 that are
* multiplies of 3 or 5
*
* Return: Always 0 (success).
*/
int main(void)
{
	int mult;

	int sum = 0;

	mult  = 0;

	while (mult < 1024)
	{
		if ((mult % 3) == 0 || (mult % 5) == 0)
		{
			sum += mult;
		}

	 mult++;
	}
	printf("%d\n", sum);
	return (0);
}
