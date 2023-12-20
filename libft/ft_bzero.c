#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*new_s;

	new_s = (unsigned char *)s;
	if (n == 0)
		return ;
	while (n--)
	{
		*new_s = 0;
		new_s++;
	}	
}
