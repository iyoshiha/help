#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *del_element;
	t_list *free_element;

	if (lst || del)
	{
		del_element = *lst;
		while (del_element)
		{
			free_element = del_element;
			del(del_element->content);
			del_element = del_element->next;
			free(free_element);
		}
	}
}
