#include "libft.h"

size_t ft_lstsize(t_list *lst)
{
	size_t len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
