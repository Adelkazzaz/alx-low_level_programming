<<<<<<< HEAD
#include <iostream>
=======
#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num = num * 2 + (*b++ - '0');
	}

	return (num);
}
>>>>>>> aecef1bfba19b94dcbd710716b651fa3d67cd718
