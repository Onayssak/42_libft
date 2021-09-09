#include <string.h>

size_t ft_strlcpy(char *dest, char *ori, size_t destsize)
{
	size_t i;
	i = 0;

	if (destsize == 0)
		return (ft_strlen(ori));
	while (i < destsize -1)
	{
		dest[i] = ori[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(ori));
}
