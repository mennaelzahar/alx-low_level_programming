#include "main.h"
#include <string.h>

/**
	* _print_rev_recursion - check the code
	*@s: char *
	* Description: print a string
	*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	putchar(*s);
}
