#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	return (1);
}
