#include "include/push_swap.h"
#include "/Users/iyoshiha/include/libft.h"
#include "/Users/iyoshiha/include/color_macros.h"

int	*dup_ary(int *ary)
{
	size_t	i;
	int		*new_ary;
	int		len;

	i = 0;
	len = get_len();
	new_ary = malloc(sizeof(int) * len);
	if (!new_ary)
		err_handle();
	while (i < len)
	{
		new_ary[i] = ary[i];
		i++;
	}
	return (new_ary);
}

void	set_index(int ***num_info, int *num)
{
	t_sort_index	i;
	int len;
	int **ary;

	i.i = 0;
	len = get_len();
	ary = *(num_info);
	ary[PS_SORTED_INDEX] = (int *)malloc(sizeof(int) * len);
	if (!ary[PS_SORTED_INDEX])
		err_handle();
	ary[PS_ARG_NUM] = num;
	ary[PS_SORTED_NUM] = dup_ary(num);
	bubble_sort(ary[PS_SORTED_NUM], len, asc);
	while (i.i < len)
	{
		i.j = 0;
		while (i.j < len)
			if (ary[PS_ARG_NUM][i.i]== ary[PS_SORTED_NUM][i.j++])
			{
				ary[PS_SORTED_INDEX][i.i] = --i.j;
				break ;
			}
		i.i++;
	}
}
