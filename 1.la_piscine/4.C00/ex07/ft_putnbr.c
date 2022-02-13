#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_cal(int nb)
{
	if (nb >= 10)
	{
		ft_putchar(nb / 10 + 48);
		return ft_cal(nb);
	}
	else
	{
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb > -2147483648 && nb < 0)
	{
		nb = nb * -1;
		write (1, "-", 1);
		ft_cal(-nb);
	}
	else if (nb < 2147483647 && nb >= 0)
	{
		ft_cal(nb);
	}
}

int	main(void)
{
	ft_putnbr(42);

	return (0);
}

