#include "main.h"

/**
 * _atoi -convert a string to an integer
 * @s:  the string to be converted
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int n = 1;
	int a = 0;

	{
		if (*s == ' - ')
			n *= -1;

		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');

		else if (a > 0)
			
	} while (*s++);
	
	return (a * n);
}
