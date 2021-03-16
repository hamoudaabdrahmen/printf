#include "holberton.h"
/**
 * print_i - prints int func
 * @arg: int to print
 * Return: number of ints printed
 */
int print_i(va_list arg)
{
	int nb = va_arg(arg, int);
	unsigned int count = 0, rnb;
	int i = 0;
	char tab[10];

	if (nb < 0)
	{
		_putchar('-');
		count++;
		rnb = -nb;
	}
	else
		rnb = nb;
	if (rnb > 0)
	{
		while (rnb != 0)
		{
			tab[i] = (rnb % 10) + '0';
			rnb /= 10;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(tab[i]);
			i--;
			count++;
		}
	}
	else
	{
		_putchar('0');
		count++;
	}

	return (count);
}
