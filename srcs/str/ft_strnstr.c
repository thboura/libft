/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 01:42:10 by kuibout           #+#    #+#             */
/*   Updated: 2020/08/04 21:40:57 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strnstr(const char *s1, const char *s2, size_t len)
 * \brief	Reproduction of strnstr() function (locates a substring in a string,
 * 		where not more than len characters are searched).
 * \param	s1 String where substring is searched
 * \param	s2 Substring to find
 * \param	len Number of characters to search
 * \return	Pointer to the first character of the first occurrence of s2 in s1.
 * 		If s2 is an empty string, s2 is returned.
 * 		If s2 occurs nowhere in s1, NULL is returned.
 */
char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	begin;
	size_t	current;

	begin = 0;
	current = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[begin] && len > begin)
	{
		if (s1[begin + current] == s2[current] && begin + current < len)
			current++;
		else
		{
			current = 0;
			begin++;
		}
		if (!s2[current])
			return ((char *)s1 + begin);
	}
	return (NULL);
}
