#include "include/push_swap.h"
#include "/Users/iyoshiha/include/libft.h"
#include "/Users/iyoshiha/include/color_macros.h"

int ft_mod_atoi(const char *str);
int	get_pivot(t_stack *stack);






static void	init_stack(t_stack *stack, int len, int *num)
{
	stack->a = lst_a();
	stack->b = lst_b();
	stack->len = len;
	stack->num = num;
}



// void push_swap()
// {
// 	int i;

// 	return ;
// }


void p(void *a){
printf("%u  ", ((t_bi_list*)a)->value);
}

int main(int argc, char **argv)
{
	t_stack stack;
	int		**num_info;
	int		*ary;

	init_len(argc - 1);
	ary = create_num_ary(get_len(), (++argv));
	num_info = (int **)malloc(sizeof(int *) * 3);
	if (!num_info)
		err_handle();
	set_index(&num_info, ary);
	init_bi_ring_lst(num_info);
	init_stack(&stack, get_len(), ary);

	// printf("%u \n", stack.a->value);
	// printf("%u \n", stack.a->next->value);
	// printf("%u \n", stack.a->next->next->value);
	// printf("%u \n", stack.a->next->next->next->value);
	// printf("%u \n", stack.a->next->next->next->next->value);
	// printf("%u \n", stack.a->next->next->next->next->next->value);
	bi_ring_lstiter(lst_a(), p);
	// push_swap();

	// for (int i = 0; i < get_len(); i++)
	// printf("a:%d ", num_info[PS_ARG_NUM][i]);
	// for (int i = 0; i < get_len(); i++)
	// printf("b:%d ", num_info[PS_SORTED_NUM][i]);
	// for (int i = 0; i < get_len(); i++)
	// printf("c: %d ", num_info[PS_SORTED_INDEX][i]);
	return 0;
}
