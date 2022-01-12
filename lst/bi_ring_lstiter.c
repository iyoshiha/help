#include "libft_bonus.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f || lst)
	{
		lst = lst->next;
		while (lst->is_nil != IS_NIL)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
