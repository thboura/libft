/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:22:41 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 21:19:19 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_strnequ(char const *s1, char const *s2, size_t n)
 * \brief	Lexicographical comparison between s1 and s2 up to n characters or
 * 		until a '\\0' is reached.
 * \return	1 if the two strings are identical, or 0 otherwise.
 */
int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 != NULL && s2 != NULL)
	{
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
