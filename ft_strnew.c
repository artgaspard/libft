/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:46:26 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/21 17:52:27 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** allocate size bytes to a new string, returns newmade string
*/

char		*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if ((str = (char*)malloc(sizeof(char) * (size + 1))) == 0)
		return (NULL);
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
