#include <stdlib.h>
#include "libft.h"

void	*_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		ft_terminate("malloc()");
	return (ptr);
}
