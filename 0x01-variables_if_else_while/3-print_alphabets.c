#include <stdio.h>

/**
* main - Prints alphabet in lowercase, and  then in uppercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char Alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 53; i++)
	{
		putchar(Alp[i]);
	}
	putchar('\n');
	return (0);
}

