/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:35:01 by jihoopar          #+#    #+#             */
/*   Updated: 2022/02/17 12:45:57 by jihoopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *range, int n)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (++i < n)
		if (range[i - 1] >= range[i])
			check = 0;
	if (!check)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(range[i] + 48);
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		print(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}
