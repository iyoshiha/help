#include "libft.h"

void bi_ring_lstiter(t_bi_list *lst, void (*f)(void *))
{
	if (f || lst)
	{
		lst = lst->next;
		while (lst->is_nil != IS_NIL)
		{
			sleep(1);
			f(lst);
			// printf("is_nil != IS_NIL %d\n", lst->is_nil != IS_NIL);
			printf("is_nil = %d\n", lst->is_nil);
			lst = lst->next;
		}
	}
}
