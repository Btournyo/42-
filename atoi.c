int	ft_atoi(char *str)
{
	int a;
	int n;
	int nb;
	
	a = 0;
	n = 1;
	nb = 0;
	while ((str[a] <= 32 && str[a] >= 0) || str[a] == '+')
		a++;
	if (str[a] == '-')
	{
		n = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		nb = nb*10;
		nb += str[a] - '0';
		a++;
	}
	return (nb*n);
}
