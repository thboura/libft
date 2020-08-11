/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 14:58:49 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/11 12:58:16 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MAP_H
# define LIBFT_MAP_H

# include <stdlib.h>
# include <stdbool.h>
# include "libft_bitsize.h"

# define MAP_INIT_CAPACITY	4

/**
 * \typedef	t_map_elem
 * \brief	Typedef of s_map_elem structure.
 */
typedef struct s_map_elem	t_map_elem;
/**
 * \struct	s_map_elem
 * \brief	Map element structure.
 * \note	The key of an element is unique in a map array. Try to add a map
 * 		element in an array already containing an identical key will result in
 * 		overwriting previous data.
 */
struct						s_map_elem
{
	size_t	key;	/**< Element identity */
	void	*data;	/**< Content */
};

/**
 * \typedef	t_map
 * \brief	Typedef of s_map structure.
 */
typedef struct s_map		t_map;
/**
 * \struct	s_map
 * \brief	C implementation of C++ map class.
 *
 * \sa		Internally, the elements in a map are always sorted by its key
 * 		following a specific strict weak ordering criterion.
 */
struct						s_map
{
	t_map_elem	*elem;			/**< Array of elements */
	size_t		capacity;		/**< Maximum number of elements */
	size_t		total;			/**< Number of elements currently in the array */
	size_t		sizeof_elem;	/**< Storage size of elements */
};

/**
 * \fn		t_map *map_init(size_t sizeof_elem)
 * \brief	Initializes a map with a given sizeof_elem (storage size of
 * 		this map elements).
 * \return	Pointer on allocated map in case of success, or NULL if an
 * 		allocation failed.
 */
t_map						*map_init(size_t sizeof_elem);
/**
 * \fn		size_t map_total(t_map *map)
 * \brief	Returns map total (number of elements).
 * \return	Map total.
 */
size_t						map_total(t_map *map);
/**
 * \fn		bool map_add(t_map *map, size_t key, void *data)
 * \brief	Adds a new element with given key in the map (which is resized if
 * 		needed).
 *
 * \sa		Be carefull : if an allocation failed, all the map will be freed.
 * \return	True in case of success, false if an allocation failed.
 * \note	Make sure you know how the key of s_map_elem works before trying to
 * 		use this function.
 */
bool						map_add(t_map *map, size_t key, void *data);
/**
 * \fn		void *map_get(t_map *map, size_t key)
 * \brief	Returns a reference to the element with given key in a map.
 * \return	Reference of element, or NULL if key is not found.
 */
void						*map_get(t_map *map, size_t key);
/**
 * \fn		bool map_delete(t_map *map, size_t key)
 * \brief	Removes and free an element from a map.
 * \return	True in case of success, false if an allocation failed (giving a
 * 		wrong key does not return an error).
 */
bool						map_delete(t_map *map, size_t key);
/**
 * \fn		void map_free(t_map *map)
 * \brief	Free a map and clears its pointer.
 */
void						map_free(t_map *map);
/**
 * \fn		bool map_resize(t_map *map, size_t capacity)
 * \brief	Resize map capacity (depends of sizeof_elem).
 * \return	True in case of success, false if an allocation failed.
 */
bool						map_resize(t_map *map, size_t capacity);
/**
 * \fn		void *map_get_index(t_map *map, t_u64 index)
 * \brief	Returns a reference to the element at given index in a map.
 * \return	Reference of element, or NULL if index is out of range.
 */
void						*map_get_index(t_map *map, t_u64 index);
/**
 * \fn		bool map_clone(t_map **dst, t_map *src)
 * \brief	Clones a map.
 * \param	dst Address of new copied map
 * \param	src Map to copy
 * \return	True in case of success, false if an allocation failed.
 */
bool						map_clone(t_map **dst, t_map *src);

#endif
