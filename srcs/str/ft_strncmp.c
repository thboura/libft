/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 01:38:59 by kuibout           #+#    #+#             */
/*   Updated: 2020/08/04 21:14:11 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		int ft_strcmp(const char *s1, const char *s2)
 * \brief	Reproduction of strncmp() function (compare up to n bytes of two
 * 		strings).
 * \return	Integer equal to the difference between the values of the first pair
 * 		of bytes (both interpreted as type unsigned char) that differ in the
 * 		strings being compared. If n is equal to zero, this function returns 0.
 */
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char *s1_tmp;
	unsigned char *s2_tmp;

	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1_tmp[i] == s2_tmp[i] && s1_tmp[i] != 0 && n - 1 > i)
		i++;
	return ((int)(s1_tmp[i] - s2_tmp[i]));
}
