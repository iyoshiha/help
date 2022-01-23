#include "include/push_swap.h"
#include "/Users/iyoshiha/include/libft.h"

t_bi_list	*lst_a()
{
	static t_bi_list	nil;

	return &nil;
}

t_bi_list	*lst_b()
{
	static t_bi_list	nil;

	return &nil;
}

static void	init(t_bi_list *a)
{
	a->is_nil = 1;
	a->next = a;
	a->prev = a;
}

void	bi_ring_lst_init()
{
	t_bi_list	*a;
	t_bi_list	*b;

	init(lst_a());
	init(lst_b());
}
