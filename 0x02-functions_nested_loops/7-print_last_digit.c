#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * print_last_digit- prints last digit of num
 * @num: a int  member
 * Return: int value
 * Description: returns last digit of num
 */
int print_last_digit(int num)
{
	int r = abs(num) % 10;
	
	if (num == INT_MIN)
		r = 8;
	_putchar('0' + r);
	return (r);
}
