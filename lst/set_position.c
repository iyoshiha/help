#include "libft_bonus.h"
#include "../include/push_swap.h"

void	set_position(t_position *base, t_list *lst)
{
	size_t i;

	i = bi_ring_lstsize(lst);
	if (i >= 5)
	{
		base->second = base->top->next;
		base->btm_2nd = base->btm->prev;
	}
	if (i >= 3)
		base->btm = lst->prev->prev;
	if (i >= 2)
		base->top = lst->next;
	base->nil = lst;
}
