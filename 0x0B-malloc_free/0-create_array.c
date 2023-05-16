#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array
 * @c: The char used to initialize the array
 *
 * Return: A pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

