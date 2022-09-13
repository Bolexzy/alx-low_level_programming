#include "main.h"

/**
* jack_bauer - Prints every minute of the day.
*
* Return: no return.
*/
void jack_bauer(void)
{
	int i, j, k, l;

	/* 00:00 to 23:59 */
	for (i = '0'; i < '3'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k < '6'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (i >= '2' && j >= '4')
						break;
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}

	}
}
