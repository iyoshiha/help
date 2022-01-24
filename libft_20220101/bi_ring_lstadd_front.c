#include "libft.h"

void bi_ring_lstadd_front(t_bi_list *nil, t_bi_list *new)
{
	t_bi_list *top;

	top = nil->next;
	new->prev = nil;			 // nil new
	new->prev->next = new;
	new->next = top; // new nil
	top->prev = new; // nil new
}

/*
	this function aims to 2 thing
	1. make list handle in called function (e.g. main)
	2. change next and prev member to points added and added element;
*/
