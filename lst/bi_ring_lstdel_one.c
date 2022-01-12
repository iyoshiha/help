#include "libft_bonus.h"

void bi_ring_lstdel_one(t_list *lst)
{
	t_list	*lst_next;
	t_list	*lst_prev;

	lst_next = lst->next;
	lst_prev = lst->prev;
	if (lst)
	{
		lst_next->prev = lst_prev;
		lst_prev->next= lst_next;
		free(lst);
	}
}
