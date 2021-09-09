#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}

char	ft_toupper(unsigned int i, char c)
{
	return (c - 32);
}

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

int main(void)
{
	printf("%s\n",ft_strmapi("hello", ft_toupper));

	return (0);
}