#include <stdio.h>

/**
 *  * main - prints number 0123456789, with putchar
 *  * followed by a new line
 *  * Return: Always 0 (Success)
 **/
int main(void)
{
	int num;

	for (num = 0; num <= 9 ; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
