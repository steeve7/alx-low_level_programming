#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Print alphabet
 * @void: empty parameter list for main
 *
 * Description: Print the alphabet in lowercase
 * can only use putchar
 *
 * Return: 0 for success
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
