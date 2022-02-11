/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:03:23 by jihoopar          #+#    #+#             */
/*   Updated: 2022/02/10 19:25:01 by jihoopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_func(int x, int y)
{
	ft_putchar(x / 10 + 48);
	ft_putchar(x % 10 + 48);
	ft_putchar(' ');
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
	if (x == 98 && y == 99)
	{
		return ;
	}
	else
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	before;
	int	after;

	before = 0;
	while (before <= 98)
	{
		after = 1;
		while (after <= 99)
		{
			if (before < after)
			{
				write_func(before, after);
			}
			after++;
		}
		before++;
	}
}
