#include "libft.h"

int	m_digitlen(unsigned int nb)
{
	int	num_digits;

	num_digits = 0;
	while (nb > 0)
	{
		nb /= 10;
		num_digits++;
	}
	if (num_digits == 0)
		return (1);
	else
		return (num_digits);
}

unsigned int	remove_negative(int nb)
{
	unsigned int	newnb;

	newnb = 0;
	if (nb < 0)
	{
		nb += 1;
		nb *= -1;
		newnb = (unsigned int)(nb + 1);
	}
	else
	{
		newnb = nb;
	}
	return (newnb);
}

void	put_to_string(unsigned int value, int negative, char *buffer,
		int num_digits)
{
	if (negative)
	{
		*buffer++ = '-';
	}
	while (value > 0 || num_digits > 0)
	{
		num_digits--;
		buffer[num_digits] = '0' + (value % 10);
		value /= 10;
	}
}

char	*ft_itoa(int n)
{
	int				number_digit;
	unsigned int	postivenumber;
	char			*result;
	int				negative;

	negative = n < 0;
	postivenumber = remove_negative(n);
	number_digit = m_digitlen(postivenumber) ;
	result = ft_calloc(number_digit + negative + 1, 1);
	if (result == NULL)
	{
		return (NULL);
	}
	put_to_string(postivenumber, negative, result, number_digit);
	return (result);
}
