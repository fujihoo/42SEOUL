/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:39:09 by jihoopar          #+#    #+#             */
/*   Updated: 2022/02/22 17:06:31 by jihoopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	check;
	int	i;

	check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			check = 0;
		i++;
	}
	return (check);
}
