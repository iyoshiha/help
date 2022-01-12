#include "../include/push_swap.h"

void	swap(t_list *nil) // sa, sb, ss
{
	t_list	*second;
	t_list	*top;

	// first->prev = NULL, first->next = second ; => first->prev = second, first->next = third
	top = nil->next;
	second = top->next; // second->prev = first , second->next = third ; => second->prev = NULL, second->next = first;
	if (top == nil || top->next == nil){
		puts("do nothing ");
		return ;
	}
	top->prev->next = second;
	second->next->prev = top;
	top->next = second->next;
	top->prev = second;
	second->next = top;
	second->prev = nil;
}
/*
	swaps next element of args and next of next element of args.
	0
	1
	2
	3
	-----
	0
	1
	:: this is circular doubly linked list

	if 1 pointer is given as argument,
	2 and 3 swaps

	0
	1
	3
	2
	----
	0
	1

	this is for circular doubly linked list.

	this changes next of swaped element. and prev of swapped elem.
*/

void	push(t_list *dst_nil, t_list *src_nil)
{
	// mv first element of src to top of dst
	// del top of dst; (second prev points nil)
	t_list	*dst_top;
	t_list	*src_top;

	src_top = src_nil->next;
	if (src_top == src_nil)
		return ;
	dst_top = dst_nil->next;
	src_nil->next = src_top->next;
	(src_top->next)->prev = src_nil;
	// src : nil, src->next : top;
	src_top->prev = dst_nil;
	src_top->next = dst_top;
	// done mv to dst
	dst_nil->next = src_top;
	dst_top->prev = src_top;
	// done dst stack
}

void	rotate(t_list *nil)
{
	t_list *top;
	t_list *second;
	t_list *btm;

	top = nil->next;
	if (top == nil)
		return ;
	btm = nil->prev;
	second = top->next;

	top->next = nil;
	top->prev = btm;
	nil->next = second;
	nil->prev = top;
	btm->next = top;
	second->prev = nil;
}

void	reverse_rotate(t_list *nil)
{
	t_list *top;
	t_list *btm;
	t_list *btm_2nd;

	top = nil->next;
	if (top == nil)
		return ;
	btm = nil->prev;
	btm_2nd = btm->prev;
	btm->next = top;
	btm->prev = nil;
	nil->next = btm;
	nil->prev = btm_2nd;
	btm_2nd->next = nil;
	top->prev = btm;
}
