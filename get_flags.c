#include "main.h"

/**
 * get_flags - WRITE A FUNCTIONS THAT PINTING THE NUMBER OF FLAGS.
 * @format: PRINTS ARGUMENTS IN THE FORMMATING STRINGS.
 * @i: ITS NUMBERS OF PARAMETERS
 *
 * Return: NUMBER OF FLAGS.
 */
int get_flags(const char *format, int *i)
{
	int flags = 0;

	int curr_i = *i + 1;

	while (format[curr_i] == '-' || format[curr_i] == '+'
			|| format[curr_i] == '0' || format[curr_1] == '#'
					|| format[curr_i] == ' ')
	{

		if (format[curr_i] == '-')
		{
			flags |= F_MINUS;
		}
		else if (format[curr_i] == '+')
		{
			flags |= F_PLUS;
		}
		else if (format[curr_i] == '0')
		{
			flags |= F_ZERO;
		}
		else if (format[curr_i] == '#')
		{
			flags |= F_HASH;
		}
		else if (format[curr_i] == ' ')
		{
			flags |= F_SPACE;
		}
		curr_i++;
	}
	*i = curr_i - 1;
	return (flags);
}
