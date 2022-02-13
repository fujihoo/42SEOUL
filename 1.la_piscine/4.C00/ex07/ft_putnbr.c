#include <unistd.h>

void	ft_putint(int c)
{
	write(1, &c, 1);
}

void	write_func(int a)
{
	if(a >= 10)
	{
		write_func(a/10);
	}

	else
	{
		ft_putint(a % 10 + 48);
	}
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if(nb > -2147483648 && nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
		write_func(nb);
	}
	else
	{
		write_func(nb);
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(2147483637);
	ft_putnbr(0);
	ft_putnbr(42);
	return (0);
}



