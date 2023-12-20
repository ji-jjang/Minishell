#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_ptr;

	lst_ptr = (t_list *)_malloc(sizeof(t_list));
	lst_ptr->content = content;
	lst_ptr->next = NULL;
	return (lst_ptr);
}
