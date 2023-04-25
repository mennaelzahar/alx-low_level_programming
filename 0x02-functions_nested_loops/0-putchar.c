#include "main.h"
/**
 * main - Entry point
 * Description: 'prints _putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x[] = "_putchar";
	int i;
	int size = sizeof(x) - 1;

	for (i = 0; i < size; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
