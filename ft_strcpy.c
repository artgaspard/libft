/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:57:18 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/05 20:44:14 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] && dst[i])
		dst[i] = src[i];
	if (src[i] == '\0' && dst[i] != '\0')
	{
		while (dst[i])
		{
			dst[i] = '\0';
			i++;
		}
		return (dst);
	}
	else if (src[i] == '\0' && dst[i] == '\0')
	{
		dst[++i] = '\0';
		return (dst);
	}
	else
		return (0);
}
