#include <unistd.h>
#include <stdio.h>

int	_chdir(char *path)
{
	int	ret;

	ret = chdir(path);
	if (ret == 0)
		return (0);
	else
	{
		perror("cd");
		return (1);
	}
}
