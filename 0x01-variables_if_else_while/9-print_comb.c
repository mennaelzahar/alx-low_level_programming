#include <stdio.h>

/**
 * main - Entry point
 * Description: 'decide if a number is positive or negative'
 * Return: Always 0 (Success)
 */


int main(void)
{
	int ch;
	int SPACE = 32;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar((char)ch);
		if (ch < 57)
		{
			putchar(',');
			putchar((char)SPACE);
		}
	}
	putchar('\n');
	return (0);
}
