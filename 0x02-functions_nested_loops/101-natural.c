#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (Bingo)
 */

int main(void)
{
	int num, sum;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 ==0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);

	return (0):
}