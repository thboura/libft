/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 13:32:53 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 18:05:08 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/**
 * \fn		char *ft_strinsert(char **dest, char const *src, t_u32 index)
 * \brief	Allocate and returns a string resulting of an insertion of src
 * 		string in dest string at given index.
 * \param	dest Address of receiving string
 * \param	src String to insert
 * \param	index Index of dest string where src will be inserted
 * \return	Pointer on new string, or NULL if allocation failed.
 */
char	*ft_strinsert(char **dest, char const *src, t_u32 index)
{
	char	*tmp;

	if (!(tmp = ft_strsub(*dest, 0, index)))
		return (NULL);
	ft_strappend(&tmp, src);
	ft_strappend(&tmp, (*dest) + index);
	ft_strdel(dest);
	*dest = tmp;
	return (*dest);
}
