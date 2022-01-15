#include "include/push_swap.h"

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

	}

	return ;
}

int main(int argc, char **argv)
{
	int i;
	int len;

	ft_mod_atoi(argv[i]);
	len = argc - 1;
	push_swap(len);






	return 0;
}
