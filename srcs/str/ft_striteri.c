/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 19:13:01 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 18:28:01 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		void ft_striteri(char *s, void (*f)(unsigned int, char *))
 * \brief	Applies the function f to each character of the string passed as
 * 		argument, and passing its index as first argument.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			f((unsigned int)i, &s[i]);
			i++;
		}
	}
}
