#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - check the code
 * @a: int *
 * @size: int
 * Description: setting to 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + size * i + i);
	}	
	printf("%d, ", sum);		
	sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(a + size * i + size - 1 - i);
	}	
	printf("%d", sum);
	putchar('\n');
}
