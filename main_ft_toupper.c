#include <stdio.h>
#include <ctype.h>

int ft_toupper(int u);

int main(void)
{
	printf("%c\n", toupper('d'));
	printf("%c\n", ft_toupper('d'));

	return (0);
}
