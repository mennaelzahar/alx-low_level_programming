#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 * Description: prints the alphabet in lowercase using for loop x10
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
