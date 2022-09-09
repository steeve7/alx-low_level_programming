#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Writes 0-9
 * @void: Empty parameters list for main
 *
 * Description: Writes 0-9 with commas and space
 *
 * Return: 0 for success
 */

int main(void)
{
	char num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
