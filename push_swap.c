#include "include/push_swap.h"
#include "/Users/iyoshiha/include/libft.h"

int ft_mod_atoi(const char *str);

void push_swap(int len, char **argv)
{
	int i;
	int *num;

	num = malloc(sizeof(int) * len);
	if (!num)
		exit(1);
	i = 0;
	while (argv[i + 1])
	{
		num[i] = ft_mod_atoi(argv[i + 1]);
		printf("%d\n", num[i++]);
	}
	i = 0;
	bubble_sort(num, 3, asc);
	while (argv[i + 1])
	{
		printf("%d\n", num[i++]);
	}



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
