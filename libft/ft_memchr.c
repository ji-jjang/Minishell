#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*new_s;

	new_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (new_s[i] == (unsigned char)c)
			return ((void *)&new_s[i]);
		i++;
	}
	return (NULL);
}
