/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:33:13 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/05 18:15:01 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size_s;
	char	*new_str;

	size_s = ft_strlen(s);
	if ((new_str = (char *)malloc(size_s + 1)) == NULL)
		return (NULL);
	ft_strcpy(new_str, s);
	return (new_str);
}
