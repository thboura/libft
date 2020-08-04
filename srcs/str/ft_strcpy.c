/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:33:21 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 18:59:42 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strcpy(char *dest, const char *src)
 * \brief	Reproduction of strcpy() function (copy a string into an array,
 * 		including the terminating null byte).
 * \param	dest Array
 * \param	src String to copy
 * \return	Pointer to the destination string.
 */
char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
