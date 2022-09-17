#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char pChar[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 7; i++)
	{
		_putchar(pChar[i]);
	}
	_putchar('\n');

	return (0);
}
