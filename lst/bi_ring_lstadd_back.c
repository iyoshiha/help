#include "libft_bonus.h"

void bi_ring_lstadd_back(t_list *nil, t_list *new)
{
	t_list	*btm;

	btm = nil->prev;
	new->next = nil;
	new->next->prev = new;
	new->prev = btm;
	btm->next = new;
}
