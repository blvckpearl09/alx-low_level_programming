#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (Bingo)
 */

int main(void)
{
	unsigned long int sum, first, second;
	int count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 98)
	{
		sum = first + second;
		printf("%lu", sum);
		first = second;
		second = sum;

		if (count < 97)
			printf(", ");
		count++;
	}

	printf("\n");

	return (0);
}
