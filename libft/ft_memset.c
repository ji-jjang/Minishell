#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*new_ptr;

	new_ptr = (unsigned char *)ptr;
	while (len--)
	{
		*new_ptr = (unsigned char)value;
		new_ptr++;
	}
	return (ptr);
}
