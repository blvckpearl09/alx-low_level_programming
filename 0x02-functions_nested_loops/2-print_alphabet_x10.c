#include "main.h"

/**
 * print_alphabet_x10
 *
 * Description - Prints alphabets in lowercase 10times
 *
 * Return: 0 (Bingo)
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int round = 0;

	while (round < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');

		round++;
	}
}
