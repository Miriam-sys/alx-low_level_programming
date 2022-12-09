#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns combination of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, z;

	for (i = 0; i < 100; i++)
	{
		for (z = 0; z < 100; z++)
		{
			if (i < z)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				if (i != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
