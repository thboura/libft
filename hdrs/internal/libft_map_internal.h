/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_map_internal.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 10:41:47 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/11 12:04:14 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MAP_INTERNAL_H
# define LIBFT_MAP_INTERNAL_H

# include "libft_map.h"

/**
 * \fn		int map_binary_search(t_map *map, size_t key)
 * \brief	Searches a map element with a given key and returns its index.
 * \return	Map element index if found, 0 if map does not have any element, or
 * 		map total if the given key is not found.
 */
int			map_binary_search(t_map *map, size_t key);

#endif
