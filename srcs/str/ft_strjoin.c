/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:33:48 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 16:24:39 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strjoin(const char *s1, const char *s2)
 * \brief	Allocates and returns a “fresh” string ending with a null byte,
 * 		result of the concatenation of s1 and s2.
 * \param	s1 Preffix string
 * \param	s2 Suffix string
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails, returns NULL.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		if ((str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
			return (NULL);
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	return (str);
}
