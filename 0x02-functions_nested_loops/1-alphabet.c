#include "main.h"

/**
 * main - print alphabet
 *
 * Description - prints alphabet in lowercase
 *
 * Return: 0 (Bingo)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
