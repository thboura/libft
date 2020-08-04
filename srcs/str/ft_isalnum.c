/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:26:58 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 18:46:03 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_isalnum(int c)
 * \brief	Reproduction of isalnum() function (test whether c is a
 * 		character of class alpha or digit in the current locale).
 * \return	1 if c is an alphanumeric character, otherwise 0.
 */
int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
