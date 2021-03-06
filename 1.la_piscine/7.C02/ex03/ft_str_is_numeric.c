/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:41:51 by jihoopar          #+#    #+#             */
/*   Updated: 2022/02/23 20:24:37 by jihoopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	check;
	int	i;

	check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			check = 0;
		i++;
	}
	return (check);
}
