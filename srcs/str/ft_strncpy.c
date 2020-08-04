/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:22:55 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 21:10:59 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strncpy(char *dest, const char *src, size_t n)
 * \brief	Reproduction of strncpy() function (copy at most n bytes of a string
 * 		into an array).
 * \param	dest Array
 * \param	src String to copy
 * \param	n Number of bytes to copy
 * \return	Pointer to the destination string.
 */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
