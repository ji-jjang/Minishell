#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == 0)
		return ;
	else
	{
		if (*lst == 0)
		{
			*lst = new;
			return ;
		}
		new->next = *lst;
		*lst = new;
	}
}
