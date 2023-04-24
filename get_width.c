#include "main.h"

/**
 * get_width - WIRTE A FUNCTIONS THAT PRINTING WIDTH.
 * @format: PRINTS ARGUMENTS THAT FORMATINGS STRINGS.
 * @i: NUMBERS OF FORMATTING STRINGS.
 * @list: LIST OF FORMATING STRINGS.
 *
 * Return: WIDTH
 */
int get_width(const char *format, int *i, va_list list)
{
	int width = 0;

	int curr_i = *i + 1;

	while (isdigit(format[curr_i]))
	{
		width = width * 10 + (format[curr_i] - '0');

		curr_i++;
	}

	if (format[curr_i] == '*')
	{
		width = va_arg(list, int);

		curr_i++;
	}

	*i = curr_i - 1;

	return (width);
}
