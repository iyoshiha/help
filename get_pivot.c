#include "include/push_swap.h"
#include "/Users/iyoshiha/include/libft.h"
#include "/Users/iyoshiha/include/color_macros.h"

int	get_pivot(t_stack *stack)
{
	int pivot;
	int p_index;

	p_index = stack->len / 2;
	pivot = stack->num[p_index];
	return (pivot);
}
