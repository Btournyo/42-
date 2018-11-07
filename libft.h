#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

int	ft_strlen(char *str)
{
	int a;
	
	a = 0;
	while (str[a])
		a++;
	return (a);
}
