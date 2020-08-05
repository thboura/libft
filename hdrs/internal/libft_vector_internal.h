/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vector_internal.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 15:01:33 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/05 16:19:25 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VECTOR_INTERNAL_H
# define LIBFT_VECTOR_INTERNAL_H

# include "libft.h"

/**
 * \fn		bool vector_resize(t_vector *da, size_t capacity)
 * \brief	Resize vector capacity (depends of sizeof_elem).
 * \return	True in case of success, false if an allocation failed.
 */
bool	vector_resize(t_vector *da, size_t capacity);

#endif
