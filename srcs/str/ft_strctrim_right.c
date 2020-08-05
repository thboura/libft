/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim_right.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:39:09 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/05 18:14:22 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

void	ft_strctrim_right(char **a_str, char const c)
{
	int		i;

	if (!a_str || !(*a_str))
		return ;
	i = ft_strlen(*a_str) - 1;
	while ((*a_str)[i] == c)
	{
		(*a_str)[i] = '\0';
		--i;
	}
}
