#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (Bingo)
 */

int main(void)
{
	long int sum;
	long int first, second;
	int count;

	sum = 0;
	first = 1;
	second = 2;
	count = 0;

	while (count < 49)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%li\n", sum);

	return (0);
}
