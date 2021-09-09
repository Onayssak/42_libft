#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c);

int main(void)
{
	printf("%c\n", tolower('D'));
	printf("%c\n", ft_tolower('D'));

	return (0);
}