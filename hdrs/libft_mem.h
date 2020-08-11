/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:36:01 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/11 12:49:45 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_H
# define LIBFT_MEM_H

# include "libft.h"

/**
 * \fn		void ft_bzero(void *s, size_t n)
 * \brief	Reproduction of bzero() function (zero a byte string).
 * \param	s Pointer on memory area
 * \param	n Number of bytes to fill
 */
void	ft_bzero(void *s, size_t n);

/**
 * \fn		void ft_freetab(void ***tab)
 * \brief	Free a two-dimensional array and sets its pointer to NULL.
 *
 * \sa		Be carefull : all sub-arrays are freed, so double free can occur.
 */
void	ft_freetab(void ***tab);

/**
 * \fn		void *ft_memalloc(size_t size)
 * \brief	Allocates and returns a “fresh” memory area.
 * 		The memory allocated is initialized to 0.
 * \param	size Size of the memory that needs to be allocated
 * \return	Pointer on allocated memory area, or NULL if the allocation failed.
 */
void	*ft_memalloc(size_t size);

/**
 * \fn		void *ft_memccpy(void *dest, const void *src, int c, size_t size)
 * \brief	Reproduction of memccpy() function (copy memory area until given
 * 		character).
 * \param	dest Pointer on memory area where bytes must be copied
 * \param	src Pointer on memory area from where bytes are copied
 * \param	c Character to find
 * \param	size Number of bytes to copy
 * \return	Pointer to the next character in dest after c, or NULL if c was not
 * 		found in the first size characters of src.
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t size);

/**
 * \fn		void *ft_memchr(const void *s, int c, size_t n)
 * \brief	Reproduction of memchr() function (scan memory for a character).
 * \param	s Pointer on memory area
 * \param	c Character to find
 * \param	n Number of bytes to scan
 * \return	Pointer to the matching byte, or NULL if the character does not
 * 		occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * \fn		int ft_memcmp(const void *s1, const void *s2, size_t n)
 * \brief	Reproduction of memcmp() function (compare memory areas up to a
 * 		given number of bytes).
 * \return	Integer equal to the difference between the values of the first pair
 * 		of bytes (both interpreted as type unsigned char) that differ in the
 * 		strings being compared.
 * 		\n	If n is zero, the return value is 0.
 * 		\n	If one of the memory areas pointed is NULL, the return value is
 * 		INT32MAX.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * \fn		void *ft_memcpy(void *dest, const void *src, size_t n)
 * \brief	Reproduction of memcpy() function (copy memory area).
 * \param	dest Pointer on memory area where bytes must be copied
 * \param	src Pointer on memory area from where bytes are copied
 * \param	n Number of bytes to copy
 * \return	Pointer on dest.
 * \note	As memcpy(), the memory areas must not overlap.
 * 		Use ft_memmove() if the memory areas do overlap.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * \fn		void ft_memdel(void **ap)
 * \brief	Takes as a parameter the address of a memory area that needs
		to be freed, then puts the pointer to NULL.
 */
void	ft_memdel(void **ap);

/**
 * \fn		void *ft_memfill(void *s, void *elem, size_t number_of_elem,
 * 		size_t sizeof_elem)
 * \brief	Fills a memory area with a given amount of copy of an element with
 * 		fixed size.
 * \param	s Pointer on memory area to fill
 * \param	elem Pointer on element that will be copied
 * \param	number_of_elem Number of element to copy
 * \param	sizeof_elem Storage size of the element
 * \return	Pointer on modified memory area.
 * \note	Invalid parameters result in undefined behaviour.
 */
void	*ft_memfill(void *s, void *elem, size_t number_of_elem,
	size_t sizeof_elem);

/**
 * \fn		void *ft_memmove(void *dest, const void *src, size_t n)
 * \brief	Reproduction of memmove() function (copy memory area).
 * \param	dest Pointer on memory area where bytes must be copied
 * \param	src Pointer on memory area from where bytes are copied
 * \param	n Number of bytes to copy
 * \return	Pointer on dest.
 * \note	As memmove(), the memory areas may overlap : copying takes place as
 * 			though the bytes in src are first copied into a temporary array that
 * 			does not overlap src or dest, and the bytes are then copied from the
 * 			temporary array to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * \fn		void *ft_memrealloc(void *ptr, size_t old_size, size_t new_size)
 * \brief	Simple implementation of realloc() function (changes the size of the
 * 		pointed memory block to a new amount of bytes).
 * \return	Pointer to the newly allocated memory.
 * 		\n	If new_size is equal to zero or the allocation of the new memory
 * 		area failed, returns NULL.
 * 		\n	If new_size is lesser than old_size, returns ptr.
 * \note	Except if an error occured, ptr is always freed.
 */
void	*ft_memrealloc(void *ptr, size_t old_size, size_t new_size);

/**
 * \fn		void *ft_memset(void *s, int c, size_t n)
 * \brief	Reproduction of memset() function (fill memory with a constant
 * 		byte).
 * \param	s Pointer on memory area to fill
 * \param	c Byte to insert (interpreted as unsigned char)
 * \param	n Number of bytes to fill
 * \return	Pointer on memeory area.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * \fn		void ft_memswap(void *a, void *b, size_t n)
 * \brief	Swaps a given number of bytes of two memory areas.
 */
void	ft_memswap(void *a, void *b, size_t n);

#endif
