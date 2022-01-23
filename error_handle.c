#include "include/push_swap.h"

void	err_handle(void)
{
	write(STDERR_FILENO, "Error\n", 6);
	exit(1);
}
