#include <stdlib.h>

int ft_isdigit(int c);

int ft_atoi(const char *nptr)
{
	int sign;
	int n;

	sign = 1;
	while (*nptr >= 9 && *nptr <= 13 || *nptr == 32)
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	n = 0;
	while (ft_isdigit(*nptr))
	{
		n = n * 10;
		n = n + (*nptr - 48);
		nptr++;
	}
	return (n * sign);
}
