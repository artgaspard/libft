/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:38:45 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/12 17:39:05 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int i;

	i = 0;
	if (*little == '\0')
		return ((char*)big);
	while (*big)
	{
		if (*big == little[i])
			i++;
		else
			i = 0;
		if (little[i] == '\0' && i != len)
			return ((char*)(big - i + 1));
		if (little[i] == '\0' && i == len)
			return ((char*)little);
		big++;
	}
	return (NULL);
}
