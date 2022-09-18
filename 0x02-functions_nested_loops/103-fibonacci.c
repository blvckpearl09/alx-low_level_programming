#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms < 4 million
 *
 * Return: 0 (Bingo)
 */

int main(void)
{
	long int total_sum, sum, first, second;

	total sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total_sum = total_sum + sum;
		}
		first = second;
		second = sum;
	}

	printf("%li\n", total_sum);

	return (0);
}
