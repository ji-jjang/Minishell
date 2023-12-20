#include "minishell.h"

bool	is_bracket(char c)
{
	if (c == '(')
		return (true);
	return (false);
}

bool	is_quote(char c)
{
	if (c == '\'' || c == '"')
		return (true);
	return (false);
}

bool	is_operator(char c)
{
	if (c == '|' || c == '>' || c == '<' || c == '&')
		return (true);
	return (false);
}

bool	is_space(char c)
{
	if (c == ' ')
		return (true);
	return (false);
}
