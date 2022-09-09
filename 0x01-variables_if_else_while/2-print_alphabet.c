#include <stdio.h>

/**
* main - Prints alphabets in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a = 'a';
	char z = 'z';
	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}	
