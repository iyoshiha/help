#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "include/libft.h"

#define NIL	0x7FFFFFFFFFFFFFFF

typedef struct	s_stack
{
	t_bi_list	*a;
	t_bi_list	*b;
	size_t		len;
	int			*num;

}				t_stack;

void	swap(t_list *nil);
void	push(t_list *dst_nil, t_list *src_nil);
void	rotate(t_list *nil);
void	reverse_rotate(t_list *nil);


#endif
