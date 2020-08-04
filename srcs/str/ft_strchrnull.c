/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrnull.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 01:23:14 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 16:22:55 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strchrnull(const char *s, int c)
 * \brief	Reproduction of strchrnul() function (similar to strchr(), except
 * 		that if the character is not found in the string, then it returns a
 * 		pointer to the null byte at the end of the string, rather than NULL).
 * \return	Pointer to the matched character, or a pointer to the null byte at
 * 		the end of the string if the character is not found.
 */
char	*ft_strchrnull(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return ((char *)s + i);
}
