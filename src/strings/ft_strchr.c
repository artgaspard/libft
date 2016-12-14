/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:36:22 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 17:02:52 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** locates first occurence of c in s, returns ptr to c
*/

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char*)s;
	while (*ptr && *ptr != c)
		ptr++;
	if (*ptr == c)
		return (ptr);
	else
		return (NULL);
}
