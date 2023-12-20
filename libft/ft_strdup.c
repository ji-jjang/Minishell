#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*ptr;
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)_malloc(sizeof(char) * (len + 1));
	while (s1[i] != 0)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
