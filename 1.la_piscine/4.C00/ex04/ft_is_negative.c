/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:22:17 by jihoopar          #+#    #+#             */
/*   Updated: 2022/02/09 19:36:51 by jihoopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	positive;
	int	negative;

	if (n >= 0)
	{
		positive = 'P';
		write (1, &positive, 1);
	}
	else
	{
		negative = 'N';
		write (1, &negative, 1);
	}
}
