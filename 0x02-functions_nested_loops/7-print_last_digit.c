#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit- prints last digit of num
 * @num: a int  member
 * Return: int value
 * Description: returns last digit of num
 */
int print_last_digit(int num)
{
	int r;
	
	r = num % 10;
	_putchar('0' + r);
	return ('0' + r);
}
