#include "include/push_swap.h"
#include "/Users/iyoshiha/include/libft.h"
#include "/Users/iyoshiha/include/color_macros.h"

int ft_mod_atoi(const char *str);
int	get_pivot(t_stack *stack);

void p(t_bi_list *arg)
{
	printf("%d\n", arg->value);
}

void sort(t_stack *stack, t_bi_list *working)
{
	int	pivot;
	int push_num;

	bubble_sort(stack->num, stack->len, asc);
	pivot = get_pivot(stack);
	push_num = 0;
	int i = 0;
	while (i < len)
		{
			if (num)

		}
		if i == stack->len
			; // sorted;
	while (push_num)




}

void push_swap(int len, char **argv)
{
	int i;
	int *num;
	t_stack	stack;

	num = malloc(sizeof(int) * len);
	if (!num)
		exit(1);
	i = 0;
		stack.a = bi_ring_lst_init_nil(NIL);
	while (argv[i + 1])
	{
		num[i] = ft_mod_atoi(argv[i + 1]);
		bi_ring_lstadd_back(stack.a, bi_ring_lstnew(num[i]));
	printf("while %d: ptr : %p \n", stack.a->prev->value, stack.a->prev->prev );
		i++;
	}
	stack.num = num;
	stack.len = len;
	sort(&stack, stack->a);
	return ;
}

int main(int argc, char **argv)
{
	int i;
	int len;

	len = argc - 1;
	push_swap(len, argv);

	return 0;
}
