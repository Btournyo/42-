#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t  n)
{ 
	const char *str1 = s1;
	const char *str2 = s2;

	while (n > 0 && str1 && str2)
	{
		if (*str1 != *str2)
			return (str1 - str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char str11[20];
	char str22[20];
	int i;
	if (argc > 0)
	{	
		memcpy(str11, argv[1], 12);
		memcpy(str22, argv[2], 12);
		i = ft_memcmp(str11, str22, 55);
		if (i < 0)
			printf("%s", "str1 < str2\n");
		if (i == 0)	
			printf("%s", "str1 = str2\n");
		if (i > 0)
			printf("%s", "str1 > str2\n");
		return (0);
	}
}
