#include "minishell.h"

void	test_is_even_quote(void)
{
	const char	*str = "(ls | \"ls | ls\")";
	const char	*str2 = "(ls | ls | ls\")";
	const char	*str3 = "(ls | ls\' | ls";

	ft_assert(is_even_quote(str), true, "is_even_pair line: 17 fail");
	ft_assert(is_even_quote(str2), false, "is_even_pair line: 18 fail");
	ft_assert(is_even_quote(str3), false, "is_even_pair line: 19 fail");
}
