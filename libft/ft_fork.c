#include <unistd.h>
#include "libft.h"

int	_fork(void)
{
	pid_t	pid;

	pid = fork();
	if (pid == -1)
		ft_terminate("fork()");
	return (pid);
}
