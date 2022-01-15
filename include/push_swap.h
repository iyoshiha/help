#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "/Users/iyoshiha/include/libft.h"

#define NIL	0x7FFFFFFFFFFFFFFF


void	swap(t_list *nil);
void	push(t_list *dst_nil, t_list *src_nil);
void	rotate(t_list *nil);
void	reverse_rotate(t_list *nil);


#endif
