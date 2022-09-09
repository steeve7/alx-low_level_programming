#include <stdlib.h>
#include <stdio.h>
#include<time.h>

/**
 * main - The last digit
 * @void: Empty parameters list for main
 *
 * Description: Prints last digit of random number and tell
 * if it is greater than 5, 0, or less than 6 and not 0.
 *
 * Return: 0 for success
 */

int main(void)
{
	int n, digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
