#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: r is an integer
 *
 * Return: 0 (Bingo)
 */

int print_last_digit(int r)
{
	int ld = r % 10;

	if (n < 0)
		ld = ld * -1;
	_putchar('0' + ld);

	return (ld);
}
