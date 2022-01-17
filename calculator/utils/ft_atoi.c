#include "../calc.h"

static int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	while (ft_isspace(*str) == 1)
		str++;
	if (*str == '-')
		neg = -neg;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
    if (*str && !ft_isdigit(*str))
        ft_error(-2);
	return (res * neg);
}
