#include "minishell.h"

void	test_is_correct_pair(void)
{
	const char	*str = "(ls | ls && (ls && ls | ls)) || ls >> filepath";
	const char	*str2 = "(ls | \"ls && (ls && ls | ls))\"";
	const char	*str3 = "(ls | \"ls && (ls && ls | ls)\")";

	ft_assert(is_correct_pair(str), true, "is_correct_pair line: 17 fail");
	ft_assert(is_correct_pair(str2), false, "is_correct_pair line: 18 fail");
	ft_assert(is_correct_pair(str3), true, "is_correct_pair line: 19 fail");
}