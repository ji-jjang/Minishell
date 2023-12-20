#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = (char *)_malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	i = 0;
	while (s1[i] != 0)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = 0;
	free((char *)s1);
	free((char *)s2);
	return (ptr);
}
