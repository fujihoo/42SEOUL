/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisolee <jisolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:25:15 by jisolee           #+#    #+#             */
/*   Updated: 2022/02/10 13:43:04 by jihoopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	proc(int a, int b, int x, int y)
{
	if ((a == 1 || a == x) && (b == 1 || b == y))
	{
		ft_putchar('o');
	}
	else if (b == 1 || b == y)
	{
		ft_putchar('-');
	}
	else if (a == 1 || a == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int 	a;
	int		b;

	b = 0;
	if (x > 0 && y > 0)
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
