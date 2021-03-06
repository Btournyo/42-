#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest1 = (char *)dest;
	char	*src1 = (char *)src;
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (src1[i] == c)
			return (dest1);
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}
