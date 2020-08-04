/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:27:41 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 16:15:42 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_isascii(int c)
 * \brief	Reproduction of isalpha() function (test whether c is a 7-bit
 * 		US-ASCII character code).
 * \return	1 if c is a 7-bit US-ASCII character code between 0 and decimal 127
 * 		inclusive, otherwise 0.
 */
int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
