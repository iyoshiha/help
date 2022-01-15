#include "include/push_swap.h"

static int ft_isspace(int c)
{
	int result;

	result = 0;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		result = 1;
	return (result);
}

int ft_mod_atoi(const char *str)
{
	unsigned long num;
	int sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	// if (is(*str) != )
	if (sign == 1 && num > LONG_MAX)
		return (-1);
	if (sign == -1 && (num - 1) > LONG_MAX)
		return (0);
	return (sign * num);
}
