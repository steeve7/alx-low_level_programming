#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - the last digit
 *
 * Description: prints last digit of random number and tells
 * if it's greater than 5, 0 and less than 6 and not 0.
 *
 * Returns: 0 for success
 */

int main(void)
{
	int n, digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
