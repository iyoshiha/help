#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst) // null protection
		return (NULL); // if access NULL->next. what is gonna happen? in wls2: fine;
	while(lst->next)
		lst = lst->next;
	return (lst);
}
