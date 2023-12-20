#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;
	size_t	len;

	len = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != 0)
	{
		len++;
		i++;
	}
	return (len);
}
