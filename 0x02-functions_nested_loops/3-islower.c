#include "main.h"

/**
 * _islower - checks for lowercase char
 *
 * @c  - c is an ascii character
 *
 * Return: 1 (If c = lowercase)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
