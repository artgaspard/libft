/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:14:54 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/16 17:42:52 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_len(char *str)
{
	int		len;

	len = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	while (*(str))
	{
		len++;
		str++;
	}
	if (len)
		str--;
	while (*str == ' ' || *str == '\n' || *str == '\t')
	{
		len--;
		str--;
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	int		len;
	int		tmp;
	char	*dst;
	char	*str;

	str = (char*)s;
	len = ft_len(str);
	if ((dst = (char*)malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	tmp = len;
	while (len--)
		*(dst++) = *(str++);
	*dst = '\0';
	return (dst - tmp);
}
