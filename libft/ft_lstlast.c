#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = ft_lstsize(lst) - 1;
	while (size--)
	{
		lst = lst->next;
	}
	return (lst);
}
