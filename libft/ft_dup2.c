#include <unistd.h>
#include "libft.h"

int	_dup2(int fildes, int fildes2)
{
	int	ret;

	ret = dup2(fildes, fildes2);
	if (ret == -1)
		ft_terminate("dup2");
	return (ret);
}
