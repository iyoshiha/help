#include "libft.h"

void bi_ring_lstclear(t_bi_list **lst)
{
	t_bi_list *del_element;
	t_bi_list *free_element;

	if (lst)
	{
		del_element = (*lst)->next;
		while (del_element)
		{
			free_element = del_element;
			del_element = del_element->next;
			free(free_element);
			if (del_element->is_nil == 1)
			{
				free(del_element);
				break ;
			}
		}
	}
}

/*
del is supposed to be free()
but in push_swap its just integer literal.
must not free, otherwise crash program;
*/
