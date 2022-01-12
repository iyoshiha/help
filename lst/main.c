#include "../include/push_swap.h"
#include "/Users/iyoshiha/include/color_macros.h"
#include "libft_bonus.h"

void print(t_list *p)
{
	puts("~~~~");

printf("prev: %p\n", p->prev);
printf("%p: %ld\n", p, p->value);
printf("next: %p\n", p->next);
	puts("~~~~");
}

int main(int argc, char **v)
{
	t_list *lst;
	t_list *blst;

	printf("%llx\n", lst);
	lst = bi_ring_lst_init_nil(NIL);
		printf("i : %d: %p\n",0 ,lst);
	for (int i = 1; i < argc; i++)
	{
		blst = bi_ring_lstnew(atoi(v[i]));
		printf("i : %d: %p\n",i ,blst);
		bi_ring_lstadd_back(lst, blst);
	}
		blst = bi_ring_lst_init_nil(NIL);
		bi_ring_lstadd_back(blst, bi_ring_lstnew(20));

		COLOR_BLU
		ft_lstiter(lst, print);
		COLOR_GRE
		ft_lstiter(blst, print);

		// swap(lst);
	push(blst, lst);
		COLOR_BLU
		ft_lstiter(lst, print);
		COLOR_GRE
		ft_lstiter(blst, print);

	push(blst, lst);
		COLOR_BLU
		ft_lstiter(lst, print);
		COLOR_GRE
		ft_lstiter(blst, print);

		COLOR_BLU
	printf("%lx\n%ld\n%ld\n", lst->value, lst->next->value, lst->prev->value);
		COLOR_GRE
	printf("%lx\n%ld\n%ld\n", blst->value, blst->next->value, blst->prev->value);
		/*

	reverse_rotate(lst);
	COLOR_BLU
	ft_lstiter(lst, print);
	reverse_rotate(lst);
	COLOR_RED
	ft_lstiter(lst, print);
	reverse_rotate(lst);
	COLOR_YEL
	ft_lstiter(lst, print);
	printf("%lx\n%ld\n%ld\n", lst->value, lst->next->value, lst->prev->value);
*/

	// printf("%p\n", lst);
	// puts("lst->next");
	// printf("%p\n", lst->next);
	// puts("1: val");
	// printf("%p\n", lst->next->prev);
	// puts("");
	// printf("%p\n", lst->value);
	// printf("%p\n", lst->prev->value);
	// printf("%p\n", lst->prev->next);

	// printf("%p\n", lst->prev->prev->prev);
// printf("%ld: %p\n", lst->value, lst);
// printf("prev: %p\n", lst->prev);
// printf("next: %p\n", lst->next);
	/*
	for (t_list *i = lst->next; lst->value != NIL; i = lst->next)
		printf("%ld\n", lst->value);
		*/
	bi_ring_lstclear(&lst);


	return 0;
}
