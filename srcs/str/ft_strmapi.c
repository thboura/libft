/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:08:46 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 21:39:16 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
 * \brief	Applies the function f to each character of the string passed as
 * 		argument by giving its index as first argument to create a “fresh” new
 * 		string resulting from the successive applications of f.
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails or s is empty, returns NULL.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
		newstr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
