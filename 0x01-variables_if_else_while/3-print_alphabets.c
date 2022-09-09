#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Print alphabet
 * @void: Empty parameter list of main
 *
 * Description: Print the alphabet in lower and upper case
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

	letter = 'A';
	
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
