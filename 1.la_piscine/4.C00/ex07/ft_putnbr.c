#include <unistd.h>

<<<<<<< HEAD
void	ft_putchar(int c)
=======
void	ft_putchar(char c)
>>>>>>> 22caa6b96338ea968379eb7341364b50a3b95f66
{
	write(1, &c, 1);
}

<<<<<<< HEAD
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

=======
void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		while (nb / 10 + 48

		ft_putchar(nb / 10 + 48);
		ft_putchar(nb % 10 + 48);
	}
	else
	{
		return ;
	}	
}

int	main(void)
>>>>>>> 22caa6b96338ea968379eb7341364b50a3b95f66
