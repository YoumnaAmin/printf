#include "main.h"
#include <limits.h>
#include <unistd.h>

/**
*  str_len - string length
*
* @str: pointer to string
*
* Return: int
*/

int str_len(const char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{; }
return (i);
}
/**
* _printf - mimic printf function
*
* @format: the string and the spec
*
* Return: int
*/
int _printf(const char *format, ...)
{
	va_list args;
	int chars_written;
	long int num;
	unsigned int b;
	char *str;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	chars_written = 0;
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				return (-1);
			}
			switch (*format)
			{
				case 'c':
					print_char(va_arg(args, int));
					chars_written++;
					break;
				case 's':
					str = va_arg(args, char*);
					if (str == NULL)
						str = "(null)";
					print_string(str);
					chars_written += str_len(str);
					break;
				case 'd':
				case 'i':
					num = va_arg(args, long int);
					chars_written += print_int(num);
					break;
				case 'b':
					b = va_arg(args, unsigned int);
					chars_written += binary_conv(b);
					break;
				case '%':
					print_char('%');
					chars_written++;
					break;
				case 'r':
					str = va_arg(args, char*);
					if (str == NULL)
						str = "(null)";
					print_rev(str);
					chars_written += str_len(str);
					break;
				default:
					print_char('%');
					print_char(*format);
					chars_written += 2;
					break;

			}

		}
		else
		{
			print_char(*format);
			chars_written++;
		}
		format++;
	}
	va_end(args);
	return (chars_written);
}
