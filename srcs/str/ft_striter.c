/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 18:56:02 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 18:08:09 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		void ft_striter(char *s, void (*f)(char *))
 * \brief	Applies the function f to each character of the string passed as
 * 		argument.
 */
void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i])
			f(&s[i++]);
	}
}
