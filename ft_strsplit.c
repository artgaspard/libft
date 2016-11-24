/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspard <agaspard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:07:28 by agaspard          #+#    #+#             */
/*   Updated: 2016/11/24 18:53:59 by agaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** locates the 'separator' c in s and returns an array of strings cuted
 ** according to c
*/

static size_t	ft_set_array(char **str, char *c, size_t *size, char ***array)
{
	while (**str)
	{
		while (**str == *c && **str)
			*str += 1;
		if (**str)
			*size += *size;
		while (**str != *c && **str)
			*str += 1;
	}
	if (!(*array = (char**)malloc(sizeof(char*) * (*size + 1))))
		return (0);
	return (1);
}

static size_t	ft_copy_strings(char **str, char *c, size_t *len, char ***array)
{
	while (**str == *c && **str)
		*str += 1;
	while (**str != *c && **str)
	{
		*str += 1;
		*len += 1;
	}
	if (!(**array = (char*)malloc(sizeof(char) * (*len + 1))))
		return (0);
	*str -= *len;
	while (**str != *c && **str)
	{
		***array = **str;
		**array += 1;
		*str += 1;
	}
	***array = '\0';
	**array -= *len;
	return (1);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t		size;
	char		**array;
	char		*str;
	size_t		len;
	size_t		count;

	if (!s)
		return (NULL);
	str = (char*)s;
	size = 0;
	if (!(ft_set_array(&str, &c, &size, &array)))
		return (NULL);
	str = (char*)s;
	count = size;
	while (count--)
	{
		len = 0;
		if (!(ft_copy_strings(&str, &c, &len, &array)))
			return (NULL);
		array++;
	}
	*array = NULL;
	array -= size;
	return (array);
}
