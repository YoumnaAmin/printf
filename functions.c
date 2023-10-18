#include "main.h"

/**
* print_char -Function to write a single character to stdout
* @c : c spec
* Return: nothing
*/

void print_char(char c)
{
	write(1, &c, 1);
}

/**
* print_string -Function to write a string to stdout
* @str : s spec
* Return: nothing
*/

void print_string(const char *str)
{
	while (*str)
	{
		print_char(*str);
		str++;
	}
}
/**
* print_int -Function to write an int to stdout
* @num : d and i spec
* Return: count
*/

int print_int(int num)
{
	int count = 0;

	if (num == 0)
	{
		print_char('0');
		return (1);
	}
	if (num == INT_MIN)
	{
		print_string("-2147483648");
		count += str_len("-2147483648");
		return (count);
	}
	if (num < 0)
	{
		print_char('-');
		num = -num;
		count++;
	}
	if (num / 10)
		count += print_int(num / 10);
	print_char((num % 10) + '0');
	count++;
	return (count);
}
