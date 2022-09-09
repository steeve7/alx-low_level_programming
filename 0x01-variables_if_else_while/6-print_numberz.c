#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Print base 10 numbers
 * @void: Empty parameters list for main
 *
 * Description: Prints number 0-9
 *
 * Return: 0 for success
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
