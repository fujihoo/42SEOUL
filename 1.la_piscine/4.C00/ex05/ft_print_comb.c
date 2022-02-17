/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:41:26 by jihoopar          #+#    #+#             */
/*   Updated: 2022/02/17 09:11:32 by jihoopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_func(int x, int y, int z)
{
	int	int_x;
	int	int_y;
	int	int_z;

	int_x = x + 48;
	int_y = y + 48;
	int_z = z + 48;
	if ((int_x < int_y) && (int_x < int_z) && (int_y < int_z))
	{
		write (1, &int_x, 1);
		write (1, &int_y, 1);
		write (1, &int_z, 1);
		if ((int_x == 55) && (int_y == 56) && (int_z == 57))
		{
			return ;
		}
		else
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	num_100;
	int	num_10;
	int	num_1;

	num_100 = 0;
	while (num_100 <= 7)
	{
		num_10 = 1;
		while (num_10 <= 8)
		{
			num_1 = 2;
			while (num_1 <= 9)
			{
				write_func (num_100, num_10, num_1);
				num_1++;
			}
			num_10++;
		}
		num_100++;
	}
}
