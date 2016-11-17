/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:06:52 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/16 17:35:44 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	char			*dest;

	i = 0;
	j = 0;
	str = (char*)s;
	while (str != NULL && str[i])
		i++;
	if ((dest = (char*)malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	while (str != NULL && *str)
		*(dest++) = f(j++, *(str++));
	*dest = '\0';
	return (dest - i);
}
