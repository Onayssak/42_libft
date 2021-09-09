#include <stdio.h>
#include <stdlib.h>

void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_striteri_ft(unsigned int i, char *c)
{
    *c = *c + i;
}

int main(void)
{
	printf("%s\n",ft_striteri("hello", &ft_striteri_ft));

	return (0);
}
