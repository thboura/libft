/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:25:56 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 17:34:00 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \brief	Allocates and returns a “fresh” substring from the string given as
 * 		argument.
 * \param	s String from which create the substring
 * \param	start Start index of the substring
 * \param	len	Size of the substring
 * \return	Pointer on substring.
 * 		If start and len aren’t refering to a valid substring, the behavior is
 * 		undefined.
 * 		If the allocation fails, the function returns NULL.
 */
char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;

	str = NULL;
	if (s != NULL)
	{
		if ((str = (char *)malloc(len + 1)) == NULL)
			return (NULL);
		ft_strncpy(str, s + start, len);
		str[len] = '\0';
	}
	return (str);
}
