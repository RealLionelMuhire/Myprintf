#include "main.h"

int (*get_func(const char *specifier))(va_list)
{
	int i;
	type_t types[] = {
		{"c" , print_c},
		{"s" , print_s},
		{NULL, NULL}
	};

	for (i = 0; types[i].identifier; i++)
	{
		if (*specifier == types[i].identifier[0])
		{
			return (types[i].print);
		}
	}
	return (NULL);
}
