#include <stdio.h>

/**
 *  * main - prints the size of various types
 *   * Return: 0 if exited properly, non-zero otherwise
 *    */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeOf(char));
	printf("Size of int: %d byte(s)\n", sizeOf(int));
	printf("Size of long int: %d byte(s)\n", sizeOf(long int));
	printf("Size of long long int: %d byte(s)\n" sizeOf(long long int));
	printf("Size of float: %d byte(s)\n", sizeOf(float));
	return (0);
}
