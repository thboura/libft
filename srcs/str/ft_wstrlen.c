/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:38:27 by killian           #+#    #+#             */
/*   Updated: 2020/08/04 23:11:43 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		size_t ft_wstrlen(wchar_t *str)
 * \brief	Get length of fixed size unicode string.
 * \return	Length of the string.
 */
size_t	ft_wstrlen(wchar_t *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
