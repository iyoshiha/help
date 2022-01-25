#include "libft.h"
#include "push_swap.h"

void bi_ring_lstiter(t_bi_list *lst, void (*f)(void *))
{
	int i = 0;
	if (f || lst)
	{
		lst = lst->next;
		while (i < 5)
		{
			sleep(1);
			f(lst);
			// printf("is_nil != IS_NIL %d\n", lst->is_nil != IS_NIL);

			puts("#############################");
			printf("is_nil = %d\n", lst->is_nil);
			printf("lst ptr: %p\n", lst);
			printf("is_nil ptr: %p\n", &lst->is_nil);
			puts("#############################");
			lst = lst->next;
			i++;
		}
	}
}
