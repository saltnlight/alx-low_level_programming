#include <stdio.h>

/**
 *  * main - prints number 0123456789 with comma and space
 *  * followed by a new line
 *  * Return: Always 0 (Success)
 **/
int main(void)
{
	int num;

	for (num = 48; num <= 57 ; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
