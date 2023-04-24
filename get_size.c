#include "main.h"

/**
 * get_size - WRITE A FUNCTIONS THAT PRINTS SIZE.
 * @format: PRINTS FORMATTING STRINGS.
 * @i: NUMBERS OF STRINGS.
 *
 * Return: SIZE.
 */
int get_size(const char *format, int *i)
{
	int size = 0;

	int curr_i = *i + 1;

	if (format[curr_i] == 'l')
	{
		size = S_LONG;
		curr_i++;
	}
	else if (format[curr_i] == 'h')
	{
		size = S_SHORT;
		curr_i++;
	}

	*i = (size == 0) ? *i : curr_i - 1;

	return (size);
}
