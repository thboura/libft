/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 13:41:06 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 15:54:00 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strappend(char **dst, const char *src)
 * \brief	Extends an allocated string by appending another string at the end
 * 		of its current value.
 * \param	dst Address of string to extend
 * \param	src String to append
 * \return	Pointer to the new joined string.
 * 		If one or both strings in argument are null, return a null pointer.
 */
char	*ft_strappend(char **dst, const char *src)
{
	char	*tmp;

	tmp = ft_strjoin(*dst, src);
	ft_strdel(dst);
	*dst = tmp;
	return (*dst);
}
