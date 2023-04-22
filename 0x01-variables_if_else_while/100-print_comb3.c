#include <stdio.h>

/**
 * main - Entry point
 * Description: 'decide if a number is positive or negative'
 * Return: Always 0 (Success)
 */


int main(void)
{
	int ch;
	int x;
	int SPACE = 32;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		for (x = 48 ; x <= 57 ; x++)
		{
			if (ch != x)
			{
				putchar((char)ch);
				putchar((char)x);
			}
			if (ch < 56 && x < 57)
			{
				putchar(',');
				putchar((char)SPACE);
			}
		}
	}
	putchar('\n');
	return (0);
}
