/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 23:24:27 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 19:29:33 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		size_t ft_strlcat(char *dest, const char *src, size_t size)
 * \brief	Reproduction of strlcat() function (appends a src string to the end
 * 		of dest, at most size - strlen(dest) - 1 bytes).
 * \param	dest String to extend
 * \param	src String to append
 * \param	size Size of buffer
 * \return	Intended length of resulting string (initial length of dest plus
 * 		length of src).
 * 		If return value is greater than size, then it means that the buffer
 * 		size was too low and some data was lost.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	long	len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	len = size - dest_len - 1;
	while (len > (long)i && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size < dest_len)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + dest_len);
}
