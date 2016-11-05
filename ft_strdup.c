/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:15:05 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/05 19:52:49 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if ((dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == 0)
		return (0);
	while (i < ft_strlen(s1))
		dest[i] = s1[i];
	dest[i] = '\0';
	return (dest);
}
