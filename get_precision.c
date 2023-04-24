#include "main.h"

/**
 * get_precision - WRITE A FUCNTIONS THAT PRINTS PRECISION.
 * @format: PRINTS ARGUMENTS THAT FORMATTING STRINGS.
 * @i: NUMBER OF STRINGS.
 * @list: ARGUMENTS LISTS.
 *
 * Return: PRECISION.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int precision = -1;

	int curr_i = *i + 1;

	if (format[curr_i] != '.')
	{
		return (precision);
	}

	precision = 0;
	curr_i++;

	if (format[curr_i] == '*')
	{
		precision = va_arg(list, int);
		curr_i++;
	}
	else
	{
		while (isdigit(format[curr_i]))
		{

		precision = precision * 10 + (format[curr_i] - '0');
		curr_i++;
		}
	}

	*i = curr_i - 1;

	return (precision);
}
