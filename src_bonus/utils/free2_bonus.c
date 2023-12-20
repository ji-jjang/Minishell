#include "minishell_bonus.h"

void	free_field(t_tree_node *tree_node)
{
	free(tree_node->content);
	free(tree_node);
}

void	free_tree_node_field(t_tree *tree)
{
	postorder_traverse(tree->root, free_field);
	free(tree);
}

void	free_2d_str(char **arr_str)
{
	int	i;

	i = 0;
	while (arr_str[i])
	{
		free(arr_str[i]);
		++i;
	}
	free(arr_str);
}
