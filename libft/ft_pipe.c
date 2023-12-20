#include <stdlib.h>
#include "libft.h"

int	_pipe(int fildes[2])
{
	int	ret;

	ret = pipe(fildes);
	if (ret == -1)
		ft_terminate("pipe");
	return (0);
}
