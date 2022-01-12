#include "libft_bonus.h"

t_list	*bi_ring_lst_init_nil(long val)
{
	t_list *nil;

	nil = malloc(sizeof(t_list));
	if (!nil)
		err;
	nil->next = nil;
	nil->prev = nil;
	nil->value = val;
	nil->is_nil = 1;
	return (nil);
}

t_list	*bi_ring_lstnew(long value)
{
	t_list *new_element;

	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->value = value;
	new_element->next = NULL;
	new_element->prev = NULL;
	new_element->is_nil = 0;
	return (new_element);
}
