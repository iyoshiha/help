#include "include/push_swap.h"

int *len_ptr(void)
{
	static int len;

	return (&len);
}

int	get_len(void)
{
	return (*len_ptr());
}

void	init_len(int len)
{
	*len_ptr() = len;
}
