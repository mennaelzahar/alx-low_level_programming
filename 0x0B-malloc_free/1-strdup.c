#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 *
 * Return: A pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t length;

	if (str == NULL)
		return NULL;

	length = strlen(str);

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return NULL;

	strcpy(duplicate, str);

	return duplicate;
}

