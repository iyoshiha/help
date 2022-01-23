#include "include/push_swap.h"

int	*create_num_ary(int len, char **num_str)
{
	size_t	i;
	int		*num;

	i = 0;
	num = malloc(sizeof(int) * len);
	if (!num)
		err_handle();
	while (i < len)
	{
		num[i] = ft_mod_atoi(num_str[i]);
		// if (num[i] == err)
			// err_handle();
		i++;
	}
	return (num);
}
