/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:41:50 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 23:02:16 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strtrim(char const *s)
 * \brief	Allocates and returns a copy of the string given as argument without
 * 		whitespaces (' ', '\\n' and '\\t') at the beginning or at the end of the
 * 		string.
 * \return	Pointer on the string.
 * 		If the allocation fails or s is empty, return NULL.
 */
char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	end;
	size_t	len;
	char	*str;

	len = 0;
	i = 0;
	end = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i + len])
	{
		if (s[i + len] == ' ' || s[i + len] == '\t' || s[i + len] == '\n')
			end++;
		else
			end = 0;
		len++;
	}
	len -= end;
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	ft_strncpy(str, s + i, len);
	return (str);
}
