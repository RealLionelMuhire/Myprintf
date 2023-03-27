#include "main.h"

int print_c(va_list args)
{
	char c = va_arg(args, int);
	int result, count = 0;

	result = _putchar(c);
	if (result == -1)
	{
		return (-1);
	}
	count++;

	return (count);
}
