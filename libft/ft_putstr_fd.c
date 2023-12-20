#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	_write(fd, s, len);
}
