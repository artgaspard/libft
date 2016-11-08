/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:14:27 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/08 11:49:19 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;

	i = 0;
	if (*little == '\0')
		return ((char*)big);
	while (*big)
	{
		if (*big == little[i])
			i++;
		else
			i = 0;
		if (little[i] == '\0')
			return ((char*)(big - i + 1));
		big++;
	}
	return (NULL);
}
