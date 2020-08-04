/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:14:55 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 22:37:56 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strrchr(const char *s, int c)
 * \brief	Reproduction of strrchr() function (locate the last occurrence of a
 * 		character in a string).
 * \return	Pointer to the matched character, or a null pointer if the character
 * 		was not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = NULL;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			tmp = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		tmp = (char *)(s + i);
	return (tmp);
}
