#include "minishell_bonus.h"

void	put_token_double_operator(
	char **prev_str, char **line, t_list *cmd_list)
{
	if (**prev_str != **line)
	{
		put_token_in_list(*prev_str, cmd_list);
		*prev_str = ft_chardup(**line);
		return ;
	}
	*prev_str = ft_charjoin(*prev_str, **line);
	put_token_in_list(*prev_str, cmd_list);
	*prev_str = ft_strdup("");
}

void	put_token_single_operator_no_space(
	char **prev_str, char **line, t_list *cmd_list)
{
	put_token_in_list(*prev_str, cmd_list);
	*prev_str = ft_strdup("");
	--(*line);
}

void	put_token_bracket_content(
	char **prev_str, char **line, t_list *cmd_list)
{
	put_token_in_list(*prev_str, cmd_list);
	*prev_str = ft_strdup("");
	*prev_str = ft_strjoin(*prev_str, read_group_content(line));
	put_token_in_list(*prev_str, cmd_list);
	*prev_str = ft_strdup("");
}

void	put_token_single_operator(
	char **prev_str, char **line, t_list *cmd_list)
{
	put_token_in_list(*prev_str, cmd_list);
	*prev_str = ft_chardup(**line);
}

void	put_token_before_space(
	char **prev_str, char **line, t_list *cmd_list)
{
	put_token_in_list(*prev_str, cmd_list);
	while (**line && is_space(**line))
		++(*line);
	if (!**line)
	{
		*prev_str = NULL;
		return ;
	}
	*prev_str = ft_strdup("");
	--(*line);
}
