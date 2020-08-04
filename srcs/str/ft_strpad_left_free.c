/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpad_left_free.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 16:11:31 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 22:26:04 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strpad_left_free(char **as, char const c, t_u32 n)
 * \brief	Apply ft_strpad_left() function to a string. If len is equal to
 * 		zero, nothing happens.
 */
void	ft_strpad_left_free(char **as, char const c, t_u32 len)
{
	char	*tmp;

	if (len == 0)
		return ;
	tmp = ft_strpad_left(*as, c, len);
	ft_strdel(as);
	*as = tmp;
}
