#include "main.h"

/**
 * _printf - CUSTOM PRINTF FUNCTIONS FOR IMPLEMENTATION.
 * @format: FORMAT STRING
 *
 * Return: NUMBER OF CHARACTER PRINTED.
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;
	char buffer[BUFF_SIZE];
	int buffer_index = 0;

	va_start(args, format);


	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				buffer[buffer_index++] = c;
				if (buffer _index == BUFF_SIZE)
				{
					wirte(1, buffer_index);
					printed_chars += buffer_index;
					buffer_index = 0;
				}
			}

			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				if (s == NULL)
				{
					s = "(null)";
				}

				while (*s != '\0')
				{
					buffer[buffer_index++] = *s++;

					if (buffer_index == BUFF_SIZE)
					{
						write(1, buffer, buffer_index);
						printed_chars += buffer_index;
						buffer_index = 0;
					}
				}
			}
			else if (*format == '%')
			{
				buffer[buffer_index++] = '%';

				if (buffer_index == BUFF_SIZE)
				{
					write(1, buffer, buffer_index);
					printed_chars += buffer_index;
					buffer_index = 0;
				}
			}
		}
		else
		{
			buffer[buffer_index++] = *format;

			if (buffer_index == BUFF_SIZE)
			{
				write(1, buffer, buffer_index);
				printed_chars += buffer_index;
				buffer_index = 0;
			}
		}
		format++;
	}

	write(1, buffer, buffer_index);
	printed_chars += buffer_index;

	va_end(args);

	return (printed_chars);
}
