/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 00:57:12 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 21:11:51 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strncat(char *dest, const char *src, size_t len)
 * \brief	Reproduction of strncat() function (appends at most len bytes of a
 * 		string to another one).
 * \param	dest String to extend
 * \param	src String to append
 * \param	len	Length of src to copy
 * \return	Pointer to the resulted string.
 */
char	*ft_strncat(char *dest, const char *src, size_t len)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] && len > i)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
