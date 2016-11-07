/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:12:57 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/07 15:21:07 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	char		*ptrdst;
	const char	*ptrsrc;

	i = 0;
	ptrdst = dst;
	ptrsrc = src;
	while (i < n)
	{
		*ptrdst++ = *ptrsrc++;
		i++;
	}
	return (dst);
}
