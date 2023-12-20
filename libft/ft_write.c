#include <unistd.h>
#include "libft.h"

ssize_t	_write(int fildes, const void *buf, size_t nbyte)
{
	ssize_t	ret;

	ret = write(fildes, buf, nbyte);
	if (ret == -1)
		ft_terminate("write()");
	return (ret);
}
