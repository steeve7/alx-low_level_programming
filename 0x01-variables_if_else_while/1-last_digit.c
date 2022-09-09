#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - the last digit
 * @void: empty parameter list for main.
 *
 * Description: prints last digit of random number and tells
 * if it's greater than 5, 0 and less than 6 and not 0.
 *
 * Returns: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("last digit of %d is %d ", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 not 0\n");
	}
	return (0);
}
