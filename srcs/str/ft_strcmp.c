/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 01:38:26 by kuibout           #+#    #+#             */
/*   Updated: 2020/08/04 16:50:52 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_strcmp(const char *s1, const char *s2)
 * \brief	Reproduction of strcmp() function (compare two strings).
 * \return	Integer equal to the difference between the values of the first pair
 * 		of bytes (both interpreted as type unsigned char) that differ in the
 * 		strings being compared.
 */
int		ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	i = 0;
	while (s1_tmp[i] == s2_tmp[i] && s1_tmp[i] != 0)
		i++;
	return ((int)(s1_tmp[i] - s2_tmp[i]));
}
