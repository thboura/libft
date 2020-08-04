/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:14:52 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 17:19:44 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_strequ(char const *s1, char const *s2)
 * \brief	Lexicographical comparison between s1 and s2.
 * \return	1 if the two strings are identical, or 0 otherwise.
 */
int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 != NULL && s2 != NULL)
	{
		if (ft_strcmp(s1, s2) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
