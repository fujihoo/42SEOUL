/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewlee <jaewlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:58:46 by jaewlee           #+#    #+#             */
/*   Updated: 2022/02/06 15:15:50 by jaewlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	proc(int a, int b, int x, int y)
{
	if ((a == 1 || a == x) && (b == 1))
	{
		ft_putchar('A');
	}
	else if ((a == 1 == 1 || a == x) && (b == y))
	{
		ft_putchar('C');
	}
	else if (a == 1 || a == x || b == 1 || b == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		a;
	int		b;

	b = 0;
	if ((x > 0) && (y > 0))
	{
		while (b++ < y)
		{
			a = 0;
			while (a++ < x)
			{
				proc (a, b, x, y);
			}
			ft_putchar('\n');
		}
	}
}
