#include "libft.h"

size_t bi_ring_lstsize(t_bi_list *lst)
{
	size_t len;

	len = 0;
	lst = lst->next;
	while (lst->is_nil != IS_NIL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
