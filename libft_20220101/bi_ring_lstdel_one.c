#include "libft.h"

void bi_ring_lstdel_one(t_bi_list *lst)
{
	t_bi_list	*lst_next;
	t_bi_list	*lst_prev;

	lst_next = lst->next;
	lst_prev = lst->prev;
	if (lst)
	{
		lst_next->prev = lst_prev;
		lst_prev->next= lst_next;
		free(lst);
	}
}
