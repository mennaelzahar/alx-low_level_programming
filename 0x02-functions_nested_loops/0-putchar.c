#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints _putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x[] = "_putchar";

	for (int i = 0; i < sizeof(x) - 1; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
