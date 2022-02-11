/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisolee <jisolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:25:15 by jisolee           #+#    #+#             */
/*   Updated: 2022/02/06 21:01:54 by jisolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	proc(int a, int b, int x, int y)
{
	if ((a == 1 && b == y) || (a == x && b == 1))
	{
		if (a == 1 && b == 1)
			ft_putchar('/');
		else
			ft_putchar('\\');
	}
	else if ((a == 1 && b == 1) || (a == x && b == y))
		ft_putchar('/');
	else if (a == 1 || a == x || b == 1 || b == y)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		a;
	int		b;

	b = 0;
	if (x > 0 && y > 0)
	{
		while (b++ < y)
		{
			a = 0;
			while (a++ < x)
				proc(a, b, x, y);
			ft_putchar('\n');
		}
	}
}
