#include "main.h"

/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for argument of the function
 * Return: 0 for success
 */
int _islpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
