#include "include/push_swap.h"
#include "/Users/iyoshiha/include/libft.h"
#include "/Users/iyoshiha/include/color_macros.h"

int ft_mod_atoi(const char *str);
int	get_pivot(t_stack *stack);

int	*dup_ary(char *ary)
{
	size_t	i;
	int		*new_ary;
	int		len;

	i = 0;
	len = get_len();
	new_ary = malloc(sizeof(int) * len);
	if (!new_ary)
		err_handle();
	while (i < len)
	{
		new_ary[i] = ary[i];
		i++;
	}
	return (new_ary);
}


		// bi_ring_lstadd_back(lst_a(), bi_ring_lstnew(num[i++]));

static void	init_stack(t_stack *stack, int len, char **argv)
{
	stack->a = lst_a();
	stack->b = lst_b();
	stack->len = len;
	stack->num = create_num_ary(len, argv);
}

void	set_index(int ***num_info, int *num)
{
	t_sort_index	i;
	int len;
	int **ary;

	i.i = 0;
	len = get_len();
	ary = *(num_info);
	ary[PS_ARG_NUM] = num;
	ary[PS_SORTED_NUM] = dup_ary(num);
	bubble_sort(ary[PS_SORTED_NUM], len, asc);
	while (i.i < len)
	{
		i.j = 0;
		while (i.j < len)
		{
			if (ary[PS_ARG_NUM][i.i]== ary[PS_SORTED_NUM][i.j++])
			{
				ary[PS_SORTED_INDEX][i.i] = --i.j;
				break ;
			}
		}
		i.i++;
	}
}

void push_swap()
{
	int i;

	return ;
}

int main(int argc, char **argv)
{
	t_stack stack;
	int		**num_info;

	bi_ring_lst_init();
	*len_ptr() = --argc;
	init_stack(&stack, get_len(), ++argv);
	num_info = (int **)malloc(sizeof(int *) * 3);
	set_index(&num_info, argv);
	push_swap();

	return 0;
}
