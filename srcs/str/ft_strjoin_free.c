/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:00:16 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/04 18:43:39 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * \fn		char *ft_strjoin_free(char *s1, char *s2, t_u8 num_param)
 * \brief	Allocates and returns a “fresh” string ending with a null byte,
 * 		result of the concatenation of s1 and s2, and free those strings
 * 		depending the value of num_param
 * \param	s1 Preffix string
 * \param	s2 Suffix string
 * \param	num_of_param Strings to free (0 for none, 1 for s1, 2 for s2,
 * 					and 3 for both)
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails, returns NULL.
 */
char	*ft_strjoin_free(char *s1, char *s2, t_u8 num_param)
{
	char	*str;

	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		if ((str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
			return (NULL);
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	else if (s1 != NULL)
		str = ft_strdup(s1);
	else if (s2 != NULL)
		str = ft_strdup(s2);
	if (num_param == 1 || num_param == 3)
		free(s1);
	if (num_param == 2 || num_param == 3)
		free(s2);
	return (str);
}
