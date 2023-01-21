int is_number(char a)
{
	return (a >= '0' && a <= '9');
}

char * eon(char * str)
{
	if(is_number(*str))
	{
		return eon(str+1);
	}
	else {
		return str - 1;
	}
}

int ft_atoi(char *str)
{
	char * endofnum;

	int pow;
	int sum = 0;
	if(*str == '-')
	{
		pow = -1;
		str++;
	}
	else {
		pow = 1;
	}

	endofnum = eon(str);
	while(endofnum >= str)
	{
		sum += pow*(*endofnum - '0');
		endofnum--;
		pow *= 10;
	}
	return sum;
}
