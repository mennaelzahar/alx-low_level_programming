#include <stdio.h>

/**
 * main - Entry point
 * Description: 'decide if a number is positive or negative'
 * Return: Always 0 (Success)
 */


int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
