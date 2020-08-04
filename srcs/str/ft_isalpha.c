/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 21:40:57 by kuibout           #+#    #+#             */
/*   Updated: 2020/08/04 16:14:56 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_isalpha(int c)
 * \brief	Reproduction of isalpha() function (test whether c is a character of
 * 		class alpha in the current locale).
 * \return	1 if c is an alphabetic character, otherwise 0.
 */
int		ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
