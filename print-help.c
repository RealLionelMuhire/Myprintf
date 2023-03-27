#include "main.h"

/**
 * print_number - we are printing some printing numbers
 * @n: number
 *
 * Return:void
 */
int print_number(unsigned int n)
{
	int retval;
	unsigned int num = n;

	if (num / 10)
		print_number(num / 10);
	retval = _putchar('0' + num % 10);
	if (retval == -1)
	{
		return (retval);
	}
	return (retval);
}

/**
 * countDigits(unsigned int num)
 * @num:number
 *
 * Return: count
 */
int countDigits(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * countBinary - counts number of digits
 * @num:number
 *
 * Return: count
 */
int countBinary(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}
