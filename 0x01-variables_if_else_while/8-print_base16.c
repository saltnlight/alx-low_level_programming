#include <stdio.h>

/**
 *  * main - prints base16 numbers,
 *  * followed by a new line
 *  * Return: Always 0 (Success)
 **/
int main(void)
{
	char ch;
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (ch = 97 ; ch <= 102 ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
