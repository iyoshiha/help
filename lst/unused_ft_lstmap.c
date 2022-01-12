#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = bi_ring_lstnew((*f)(lst->value))))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->value);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		bi_ring_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
