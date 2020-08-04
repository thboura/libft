/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 19:17:54 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 21:00:35 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strmap(const char *s, char (*f)(char))
 * \brief	Applies the function f to each character of the string given as
 * 		argument to create a “fresh” new string resulting from the successive
 * 		applications of f.
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails or s is NULL, returns NULL.
 */
char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	i;
	char	*newstr;

	i = 0;
	if (!s)
		return (NULL);
	if ((newstr = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	while (s[i])
	{
		newstr[i] = f(s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
