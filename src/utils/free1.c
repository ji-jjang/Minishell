#include "minishell.h"

void	free_list_only_node(t_list *list)
{
	while (list->len)
		pop_front(list);
	free(list);
}

void	free_list_node_content(t_list *list)
{
	t_node	*cur_node;
	t_node	*next_node;

	cur_node = list->head;
	while (cur_node)
	{
		next_node = cur_node->next;
		free(cur_node->content);
		free(cur_node);
		cur_node = next_node;
	}
	free(list);
}

void	free_token(t_token *token)
{
	free(token->value);
	free(token);
}

void	free_list_node_token(t_list *list)
{
	t_node	*temp;

	while (list->len)
	{
		temp = list->head;
		free_token((t_token *) temp->content);
		pop_front(list);
	}
	free(list);
}

void	free_rest(t_list *tokenized_list, t_tree *cmd_tree, t_list *cmd_list)
{
	free_list_node_token(tokenized_list);
	free_tree_node_field(cmd_tree);
	free_list_only_node(cmd_list);
}
