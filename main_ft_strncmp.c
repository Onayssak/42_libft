#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("%d: ", ft_strncmp("-test", "test2", 5));
	printf("%d: ", ft_strncmp(" ", " ", 1));
	printf("%d: ", ft_strncmp("teste", "testo", 6));
	printf("%d: \n", ft_strncmp("\0", "\0", 5));
	printf("%d: ", strncmp("-teste", "testo", 5));
	printf("%d: ", strncmp(" ", " ", 1));
	printf("%d: ", strncmp("teste", "testo", 6));
	printf("%d: \n", strncmp("\0", "\0", 5));
	return (0);
}
