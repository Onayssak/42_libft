#include <string.h>

char *ft_strdup(const char *s)
{
	char *s2;
	int size;

	size = ft_strlen(s) + 1;
	s2 = (char *)malloc(size);

	if (s2)
		ft_strlcpy(s2, s, size);
	return (s2);
}
