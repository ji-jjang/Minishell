#include <unistd.h>
#include "libft.h"

int	_close(int fd)
{
	int	ret;

	ret = close(fd);
	if (ret == -1)
		ft_terminate("close()");
	return (ret);
}
