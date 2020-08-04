/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 12:07:53 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 20:39:46 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		size_t ft_strlcpy(char *dest, const char *src, size_t size)
 * \brief	Reproduction of strlcpy() function (copy a string into an array,
 * 		up to size - 1 characters).
 * \param	dest Array
 * \param	src String to copy
 * \param	size Size of buffer
 * \return	Length of src.
 * 		If return value is lower than size, then it means that the buffer
 * 		size was too low and some data was lost.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
