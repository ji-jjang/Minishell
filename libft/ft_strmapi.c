#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	size_t			s_len;
	unsigned int	i;

	i = 0;
	s_len = ft_strlen(s);
	ptr = (char *)_malloc(sizeof(char) * (s_len + 1));
	while (s[i] != 0)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
