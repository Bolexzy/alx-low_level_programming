#include <stdio.h>
#include <stdlib.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_couples(int cents);
int calculate_pennies(int cents);

/**
 * main -  prints the minimum number of coins
 *      to make change for an amount of money.
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int cents = 0, coins = 0, quarters, dimes, nickels, couples, pennies;

	if (argc == 2)
	{
		cents = atoi(argv[1]);

		quarters = calculate_quarters(cents);
		cents = cents - quarters * 25;

		dimes = calculate_dimes(cents);
		cents = cents - dimes * 10;

		nickels = calculate_nickels(cents);
		cents = cents - nickels * 5;

		couples = calculate_couples(cents);
		cents = cents - couples * 2;

		pennies = calculate_pennies(cents);
		cents = cents - pennies * 1;

		coins = quarters + dimes + nickels + couples + pennies;

	}
	else
	{
		puts("Error");
		return (1);
	}

	printf("%i\n", coins);
	return (0);
}


/**
 * calculate_quarters - calculate changes to make for 25 cents
 *
 * @cents: Amount of money
 * Return: Amount left in cents.
 */
int calculate_quarters(int cents)
{
	int quarters = 0;

	while (cents >= 25)
	{
		cents = cents - 25;
		quarters++;
	}
	return (quarters);
}


/**
 * calculate_dimes - calculate changes to make for 10 cents
 *
 * @cents: Amount of money
 * Return: Amount left in cents.
 */
int calculate_dimes(int cents)
{
	int dimes = 0;

	while (cents >= 10)
	{
		cents = cents - 10;
		dimes++;
	}
	return (dimes);
}


/**
 * calculate_nickels - calculate changes to make for 5 cents
 *
 * @cents: Amount of money
 * Return: Amount left in cents.
 */
int calculate_nickels(int cents)
{
	int nickels = 0;

	while (cents >= 5)
	{
	cents = cents - 5;
	nickels++;
	}
	return (nickels);
}

/**
 * calculate_couples - calculate changes to make for 2 ce    nts
 *
 * @cents: Amount of money.
 * Return: Amount left in cents.
 */
int calculate_couples(int cents)
{
	int couples = 0;

	while (cents >= 2)
	{
		cents = cents - 2;
		couples++;
	}
	return (couples);
}

/**
  * calculate_pennies - calculate changes to make for 1 cents
  *
  * @cents: Amount of money
  * Return: Amount left in cents.
  */
int calculate_pennies(int cents)
{
	int pennies = 0;

	while (cents >= 1)
	{
		cents = cents - 1;
		pennies++;
	}
	return (pennies);
}
