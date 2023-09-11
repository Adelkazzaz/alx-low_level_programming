#include <stdio.h>

/**
 * main -  Entry point
 *
 * discription : Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			putchar('0' + i);
			putchar(',');
			putchar(' ');
			putchar('0' + j);
			putchar('\n');
		}
	}
	return (0);
}
