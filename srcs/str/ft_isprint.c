/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 01:51:21 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 16:15:58 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_isprint(int c)
 * \brief	Reproduction of isprint() function (test whether c is a character of
 * 		class print in the current locale).
 * \return	1 if c is a printable character, otherwise 0.
 */
int		ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
