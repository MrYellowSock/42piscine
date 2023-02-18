#include <stdlib.h>

int	m_digitlen(unsigned int nb, unsigned int base)
{
   int num_digits = 0;
    while (nb != 0) {
        nb /= 10;
        num_digits++;
    }
    return num_digits;
}

unsigned int	remove_negative(int nb)
{
	unsigned int	newnb;

	newnb = 0;
	if (nb < 0)
	{
		nb += 1;
		nb *= -1;
		newnb = (unsigned int)nb + 1;
	}
	else
	{
		newnb = nb;
	}
	return (newnb);
}

void put_to_string(unsigned int value,int negative, char* buffer, int num_digits) {
    int pos = num_digits;
    while (pos > 0) {
        pos--;
        buffer[pos] = '0' + (value % 10);
        value /= 10;
    }
	if(negative){
		pos--;
		buffer[pos] = '-';
	}
}

char	*ft_itoa(int n)
{
	int				s_cur_digit;
	int				s_cur_power;
	char			digit;
	int				number_digit;
	unsigned int	postivenumber;
	char			*result;
	int				negative;

	negative = n < 0;
	postivenumber = remove_negative(n);
	number_digit = m_digitlen(postivenumber, 10) + negative;
	result = malloc(number_digit + 1);
	if (result == NULL)
	{
		return  NULL;
	}
	put_to_string(postivenumber, negative, result, number_digit);
	return result;
}
