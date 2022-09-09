#include <stdio.h>

/**
* main - Prints alphabets in lowercase except q nd e.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
