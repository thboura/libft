/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:20:41 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 22:54:40 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strstr(const char *s1, const char *s2)
 * \brief	Reproduction of strstr() function (locate a substring in a string)
  * \param	s1 String where substring is searched
 * \param	s2 Substring to find
 * \return	Pointer to the first character of the first occurrence of s2 in s1.
 * 		If s2 is an empty string, s2 is returned.
 * 		If s2 occurs nowhere in s1, NULL is returned.
 */
char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	begin;
	size_t	current;

	begin = 0;
	current = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[begin])
	{
		if (s1[begin + current] == s2[current])
			current++;
		else
		{
			current = 0;
			begin++;
		}
		if (!s2[current])
			return ((char *)(s1 + begin));
	}
	return (NULL);
}
