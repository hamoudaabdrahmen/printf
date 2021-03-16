#include "holberton.h"
/**
 * print_X - a function that prints hex
 * @arg: int to convert
 * Return: printed num
 */
int print_X(va_list arg)
{
	long int n = va_arg(arg, long int);
	long unsigned int nb;
	int tab[20];
	int i, j, count = 0;
	char a[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
	'9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	if (n < 0)
	{
		_putchar('-');
		count++;
		nb = -n;
	}
	else
		nb = n;
	if (nb == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	for (i = 0; nb != 0; i++)
	{
		tab[i] = nb % 16;
		nb = nb / 16;
	}
	i--;
	for (; i >= 0; i--)
	{
		for (j = 0; j < 17; j++)
		{
			if (tab[i] == b[j])
			{
				_putchar(a[j]);
				count++;
				break;
			}
		}
	}
	return (count);
}
