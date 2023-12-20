#include "minishell_bonus.h"

char	**list_to_2d_array(t_list *envp_list)
{
	char	**arr;
	int		i;
	t_node	*cur_node;

	arr = ft_calloc(sizeof(char *), envp_list->len + 1);
	i = 0;
	cur_node = envp_list->head;
	while (cur_node)
	{
		arr[i] = (char *) cur_node->content;
		++i;
		cur_node = cur_node->next;
	}
	return (arr);
}
