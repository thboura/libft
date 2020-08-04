/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:24:16 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 21:24:27 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strnew(size_t size)
 * \brief	Allocates and returns a “fresh” string ending with '\\0' (each
 * 		character of the string is initialized at '\\0').
 * \return	Pointer on string, or NULL if allocation failed.
 */
char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char *)ft_memalloc(size + 1)))
		return (NULL);
	return (str);
}
