/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:14:27 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/09 17:25:47 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int				i;
	char			*ptr;

	i = 0;
	ptr = (char *)big - 1;
	if (!*little)
		return ((char*)big);
	while (*(++ptr))
	{
		if (*ptr == little[i])
			i++;
		else
			i = 0;
		if (!little[i])
			return (ptr - i + 1);
	}
	return (NULL);
}
