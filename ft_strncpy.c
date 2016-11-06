/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:55:57 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/06 13:26:56 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	int j;

	i = 0;
	j = len;
	while (src[j] && dst[i])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (src[j] == '\0' && dst[i] != '\0')
	{
		dst[i] = '\0';
		i++;
	}
	else if (src[j] == '\0' && dst[i] == '\0')
	{
		dst[++i] = '\0';
		return (dst);
	}
	else
		return (0);
}
