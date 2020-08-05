/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vector.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 00:42:57 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/05 19:16:53 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VECTOR_H
# define LIBFT_VECTOR_H

# include <stdlib.h>
# include <stdbool.h>

/**
 * \def		VECTOR_INIT_CAPACITY
 * \brief	Initial value of a vector capacity.
 */
# define VECTOR_INIT_CAPACITY	4

/**
 * \struct	s_vector
 * \brief	C implementation of C++ vector class.
 *
 * \sa		Be carefull : it is not recommended to store the pointer of items or
 * 		the pointer returned by vector_get() if you add elements to the
 * 		array, because the pointer address will change in case of reallocation.
 */
/**
 * \typedef	t_vector
 * \brief	Typedef of s_vector structure.
 */
typedef struct			s_vector
{
	void	*items;			/*!< Array of elements */
	size_t	capacity;		/*!< Maximum number of elements */
	size_t	total;			/*!< Number of elements currently in the array */
	size_t	sizeof_elem;	/*!< Storage size of elements */
}						t_vector;

/**
 * \fn		bool vector_init(t_vector *vector, size_t sizeof_elem)
 * \brief	Initialize a vector with a given sizeof_elem (storage size of
 * 		this vector elements).
 * \return	True in case of success, false if the allocation of the container
 * 		failed.
 */
bool					vector_init(t_vector *vector, size_t sizeof_elem);

/**
 * \fn		bool vector_push(t_vector *da, void *item)
 * \brief	Add a new element at the end of the vector (which is resized if
 * 		needed).
 * \return	True in case of success, false if an allocation failed.
 */
bool					vector_push(t_vector *vector, void *item);

/**
 * \fn		void *vector_get(t_vector *da, size_t index)
 * \brief	Return a reference to the element at given index in a vector.
 * \return	Reference of element, or NULL if index is out of range.
 */
void					*vector_get(t_vector *vector, size_t index);

/**
 * \fn		bool vector_delete(t_vector *da, size_t index)
 * \brief	Remove and free an element from a vector.
 * \return	True in case of success, false if an allocation failed (giving an
 * 		out of range index does not return an error).
 */
bool					vector_delete(t_vector *vector, size_t index);

/**
 * \fn		int vector_total(t_vector *da)
 * \brief	Returns vector total (number of elements).
 * \return	Vector total as int.
 */
int						vector_total(t_vector *vector);

/**
 * \fn		void vector_set(t_vector *da, size_t index, void *item)
 * \brief	Set a vector element value (if index is out of range, does nothing).
 */
void					vector_set(t_vector *vector, size_t index,
							void *item);

/**
 * \fn		bool vector_pop(t_vector *da)
 * \brief	Remove last element of a vector.
 * \return	True in case of success, false if an allocation failed.
 */
bool					vector_pop(t_vector *vector);

/**
 * \fn		void vector_free(t_vector *da)
 * \brief	Free a vector and clear its pointer.
 */
void					vector_free(t_vector *vector);

/**
 * \fn		void *vector_back(t_vector *da)
 * \brief	Returns the last element of a vector.
 * \return	Reference of element.
 */
void					*vector_back(t_vector *vector);

/**
 * \fn		bool vector_insert(t_vector *da, size_t index, void *item)
 * \brief	Insert a new element in a vector at a given index.
 * \return	True in case of success, false if an allocation failed (giving an
 * 		out of range index does not return an error).
 */
bool					vector_insert(t_vector *vector, size_t index,
							void *item);

/**
 * \fn		bool vector_join(t_vector *vec1, t_vector *vec2)
 * \brief	Concatenate a vector with another.
 * \param	vec1 Vector to extand
 * \param	vec2 Vector to append
 * \return	True in case of success, false if both sizeof_elem are different
 * 		or if an allocation failed.
 */
bool					vector_join(t_vector *vec1, t_vector *vec2);

/**
 * \fn		bool vector_append_array(t_vector *vector, void *array,
 * 		size_t number_of_elem)
 * \brief	Add an array as multiple elements in a vector.
 * 		Invalid parameters result in undefined behaviour.
 * \return
 */
bool					vector_append_array(t_vector *vector, void *array,
							size_t number_of_elem);

/**
 * \fn		bool vector_clone(t_vector *src, t_vector *dst)
 * \brief	Clone a vector.
 * \return	True in case of success, false if an allocation failed.
 */
bool					vector_clone(t_vector *src, t_vector *dst);

/**
 * \fn		bool vector_init_n(t_vector *vector, size_t sizeof_elem,
 * 		size_t numof_elem)
 * \brief	Initialize a vector with a given sizeof_elem (storage size of
 * 		this vector elements) and number of elements.
 *
 * \sa		Be carefull : allocated memory is not filled with zero (accessing
 * 		elements can result in undefined behaviour).
 * \return	True in case of success, false if the allocation of the container
 * 		failed.
 */
bool					vector_init_n(t_vector *vector, size_t sizeof_elem,
	size_t numof_elem);

#endif
