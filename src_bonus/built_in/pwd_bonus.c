#include "minishell_bonus.h"

int	b_pwd(void)
{
	char	pwd[256];

	if (getcwd(pwd, 256) != 0)
		ft_putendl_fd(pwd, 1);
	return (0);
}
