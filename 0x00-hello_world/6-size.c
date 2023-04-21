#include <stdio.h>
/**
 * main - Entry point
 * Description: 'a C program that prints the size of various types on the computer'
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n",sizeof(char));
	printf("Size of an int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %d byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n",sizeof(long long int));
	printf("Size of a float: %d byte(s)\n",sizeof(float));
	return (0);
}

/*
 *Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)*/
