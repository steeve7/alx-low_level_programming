#include <stdio.h>

/**
 * main - print quotes
 *
 * Return: zero on success
 *
 */

int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long int);
	int longlongSize = sizeof(long long int);
	int floatSize = sizeof(float);


	printf("size of a char: %d byte(s)\n", charSize);
	printf("size of an int: %d byte(s)\n", intSize);
	printf("size of a long int: %d byte(s)\n", longSize);
	printf("size of a long long int: %d byte(s)\n", longlongSize);
	printf("size of a float: %d byte(s)\n", floatSize);
	return (0);
}
