#include <stdio.h>

int ft_isprint(int c);

int main(void)
{
	int c;
	c = -127;

	printf("%d\n", ft_isprint(c));
	return (0);
}
