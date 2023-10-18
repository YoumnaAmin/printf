#include "main.h"

/**
 * binary_conv - to convert unsigned int to binary
 * @num: unsigned int
 * Return: count
*/

int binary_conv(unsigned int num)
{
	int b[32];
	int j, i = 0;
	int count = 0;

	if (num == 0)
	{
		print_char('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			b[i++] = num % 2;
			num /= 2;
			count++;
		}
		for (j = i - 1; j >= 0; j--)
			print_char('0' + b[j]);
	}
	return (count);
}

/**
 * print_rev - print string in reverse
 * @str: string
 * Return: nothing
 */

void print_rev(const char *str)
{
	int length = str_len(str);
	int q;

	for (q = length - 1; q >= 0; q--)
	{
		print_char(str[q]);
	}
}
