/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:39:45 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 16:15:49 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_isdigit(int c)
 * \brief	Reproduction of isdigit() function (test whether c is a character of
 * 		class digit in the current locale).
 * \return	1 if c is a decimal digit, otherwise 0.
 */
int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
