#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The int to be operated on
 * Return: returns an unsigneed int value to calling function
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}