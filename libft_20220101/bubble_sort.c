#include "libft.h"

static void ascending_sort(int *num, t_sort_index *sort_i)
{
	if (num[sort_i->j] > num[sort_i->i])
	{
		num[sort_i->j] = num[sort_i->j] ^ num[sort_i->i];
		num[sort_i->i] = num[sort_i->j] ^ num[sort_i->i];
		num[sort_i->j] = num[sort_i->j] ^ num[sort_i->i];
		sort_i->num_swaped++;
		sort_i->flag = 1;
	}
	sort_i->i--;
	sort_i->j--;
}

static void descending_sort(int *num, t_sort_index *sort_i)
{
	if (num[sort_i->j] < num[sort_i->i])
	{
		num[sort_i->j] = num[sort_i->j] ^ num[sort_i->i];
		num[sort_i->i] = num[sort_i->j] ^ num[sort_i->i];
		num[sort_i->j] = num[sort_i->j] ^ num[sort_i->i];
		sort_i->num_swaped++;
		sort_i->flag = 1;
	}
	sort_i->i--;
	sort_i->j--;
}

t_swap_num	bubble_sort(int *num, int len2sort, t_e_order order)
{
	t_sort_index	sort_i;
	void	(*sort)(int *, t_sort_index *);

	if (order)
		sort = descending_sort;
	else
		sort = ascending_sort;
	sort_i.flag = 1;
	sort_i.k = 0;
	sort_i.num_swaped = 0;
	while (sort_i.flag)
	{
		sort_i.i = len2sort - 1;
		sort_i.j = sort_i.i - 1;
		sort_i.flag = 0;
		while (sort_i.k <= sort_i.j)
			(*sort)(num, &sort_i);
		sort_i.k++;
	}
	return (sort_i.num_swaped++);
}
