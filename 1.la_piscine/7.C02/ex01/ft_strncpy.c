/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:44:08 by jihoopar          #+#    #+#             */
/*   Updated: 2022/02/21 19:21:49 by jihoopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);
{
	int *temp;
	int i;

	temp = dest;
	i = 0;
	while (i < n && *src)
	{
		*(dest++) = *(src++);
		i++;
	}
	while (i < n)
	{		
		*dest = 0;
		i++;
	}
	return (temp);
}
