#include "minishell.h"
#include "test.h"
#include <stdio.h>

void	test_read_wrapped_content(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "\"Hello\"World";
	str2 = "\"\"a\"\"";
	str3 = "(hello)world";
	str1 = read_quote_content(&str1, '\"');
	str2 = read_quote_content(&str2, '\"');
	str3 = read_group_content(&str3);
	ft_assert(ft_strcmp(str1, "\"Hello\""), 0,
		"read_quote_content : 22");
	ft_assert(ft_strcmp(str2, "\"\""), 0,
		"read_quote_content : 23");
	ft_assert(ft_strcmp(str3, "(hello)"), 0,
		"read_quote_content : 24");
	free(str1);
	free(str2);
	free(str3);
}
