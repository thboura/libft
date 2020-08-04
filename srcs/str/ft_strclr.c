/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:53:45 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 21:18:03 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		void ft_strclr(char *s)
 * \brief	Sets every character of the string to the value '\\0'.
 */
void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
			s[i++] = '\0';
	}
}
