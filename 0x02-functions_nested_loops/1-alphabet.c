#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Description: prints the alphabet in lowercase using for loop
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
