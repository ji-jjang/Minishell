#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		_write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		_write(fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	ft_putchar_fd(n + '0', fd);
}
