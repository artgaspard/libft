/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:12:57 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/07 14:44:29 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ptrdst;
	const char	*ptrsrc;

	ptrdst = dst;
	ptrsrc = src;
	while (n--)
		*ptrdst++ = *ptrsrc++;
	return (dst);
}
