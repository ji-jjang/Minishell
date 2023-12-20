#include "linked_list.h"
#include "libft.h"
#include "minishell.h"

t_list	*init_list(void)
{
	t_list	*list;

	list = _malloc(sizeof(t_list));
	list->head = NULL;
	list->tail = NULL;
	list->len = 0;
	return (list);
}

t_node	*make_node(void *content)
{
	t_node	*new_node;

	new_node = (t_node *)_malloc(sizeof(t_node));
	new_node->content = content;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	swap_node(t_list *list)
{
	t_node	*fixed_node;
	t_node	*cursor;
	t_node	*cursor_l;

	cursor = list->tail;
	cursor_l = cursor->prev;
	fixed_node = cursor_l->prev;
	cursor->prev = fixed_node;
	if (fixed_node != NULL)
		fixed_node->next = cursor;
	cursor->next = cursor_l;
	cursor_l->prev = cursor;
	cursor_l->next = NULL;
	if (cursor_l == list->head)
		list->head = cursor;
	list->tail = cursor_l;
}
