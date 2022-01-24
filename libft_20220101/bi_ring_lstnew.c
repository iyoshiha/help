#include "libft.h"

t_bi_list	*bi_ring_lstnew(unsigned int value)
{
	t_bi_list *new_element;

	new_element = malloc(sizeof(t_bi_list));
	if (!new_element)
		return (NULL);
	new_element->value = value;
	new_element->next = NULL;
	new_element->prev = NULL;
	new_element->is_nil = 0;
	return (new_element);
}
