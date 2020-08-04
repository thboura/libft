/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:39:09 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 21:18:36 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/**
 * \fn		void ft_strctrim_left(char **a_str, char const c)
 * \brief	Replace all leading characters of a non-null string equal to c by
 * 		'\\0'.
 * \param	a_str Address of the string
 * \param	c Character to replace
 */
void	ft_strctrim_left(char **a_str, char const c)
{
	int		i;

	if (!a_str || !(*a_str))
		return ;
	i = 0;
	while ((*a_str)[i] == c)
	{
		(*a_str)[i] = '\0';
		i++;
	}
}
