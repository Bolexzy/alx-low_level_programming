#include "main.h"

/**
* main - Prints _putchar
* @c: The character to print
*
* Return: Always 0 (Success)
*/
int _putchar(char c);

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int i, Size;

	Size = sizeof(str) / sizeof(int);
	for (i = 0; i < Size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
