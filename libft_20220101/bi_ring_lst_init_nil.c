#include "libft.h"

t_bi_list	*bi_ring_lst_init_nil(unsigned int val)
{
	t_bi_list *nil;

	nil = malloc(sizeof(t_bi_list));
	if (!nil)
		return (NULL);
	nil->next = nil;
	nil->prev = nil;
	nil->value = val;
	nil->is_nil = 1;
	return (nil);
}
