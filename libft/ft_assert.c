#include <stdio.h>
#include "libft.h"

void	ft_assert(bool test_func, bool answer, char *error_message)
{
	if (test_func == answer)
		return ;
	ft_putstr_fd("Assert : ", 2);
	ft_putstr_fd(error_message, 2);
	ft_putstr_fd("\n", 2);
	exit(1);
}
