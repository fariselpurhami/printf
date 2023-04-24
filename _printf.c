#include "main.h"

/**
 * _printf - CUSTOM PRINTF FUNCTIONS FOR IMPLEMENTATION.
 * @format: FORMAT STRING
 *
 * Return: NUMBER OF CHARACTER PRINTED.
 */
int _printf(const char *format, ...);
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(arg, int);

				write(1, &c, 1);
				printed_chars++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				if (str)
				{
					while (*str)
					{
						write(1, str, 1);
						str++;
						printed_chars++;
					}
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				printed_chars++;
			}
		}
		else
		{
			write(1, format, 1);
			printed_chars++;
		}
		format++;
	}

	va_end(args);
	return (printed_chars);
}
