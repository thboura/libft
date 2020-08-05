/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_p4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 12:24:49 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/05 16:10:51 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal/libft_vector_internal.h"

bool	vector_init_n(t_vector *vector, size_t sizeof_elem, size_t numof_elem)
{
	vector->capacity = VECTOR_INIT_CAPACITY;
	while (vector->capacity < numof_elem)
		vector->capacity *= 2;
	vector->total = numof_elem;
	vector->sizeof_elem = sizeof_elem;
	if (!(vector->items = ft_memalloc(sizeof_elem * vector->capacity)))
		return (false);
	return (true);
}
