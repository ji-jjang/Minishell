#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_last;

	if (new == 0)
		return ;
	else
	{
		if (*lst == 0)
		{
			*lst = new;
			return ;
		}
		lst_last = ft_lstlast(*lst);
		lst_last->next = new;
	}
}
