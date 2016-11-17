/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:14:27 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/12 17:23:56 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int				len;
	char			*ptr;

	ptr = (char *)big - 1;
	if (!*little)
		return (++ptr);
	while (*(++ptr))
	{
		len = 0;
		while (*(ptr++) == little[len] && little[len])
			len++;
		ptr -= (len + 1);
		if (!little[len])
			return (ptr);
	}
	return (NULL);
}
