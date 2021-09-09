#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < len && big[i] != "\0")
	{
		j = 0;
		while (i + j < len && big[i] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char*)big + 1);
	i++;
	}
	return (NULL);
}
