#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0 (Bingo)
 *
 */

void times_table(void)
{
	int row, column, product, tens, units;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			tens = product / 10;
			units = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(units + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(units + '0');
			}
		}
		_putchar('\n');
	}
}
