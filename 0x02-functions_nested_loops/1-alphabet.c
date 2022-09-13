#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase.
*
* Return: Always 0(Succss)
*/
void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
