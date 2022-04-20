#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 * follwed by a newline
**/

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}
