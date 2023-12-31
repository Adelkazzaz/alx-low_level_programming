#include "main.h"
/**
 * create_array - Create an array, and initialiazes it with a specific
 * char @c
 *
 * @size: Size of the array of chars to be created
 *
 * @c: Char value to initialize the array with
 *
 * Return: Pointer to the array created OR NULL if @size = 0 OR
 * the creation of the array fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	ptr[size] = '\0';

	return (ptr);
}
