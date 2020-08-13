/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_gnl.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:42:00 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/13 16:18:57 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_GNL_H
# define LIBFT_GNL_H

/**
 * \def		BUFF_SIZE
 * \brief	Size of get_next_line() buffer.
 */
# define BUFF_SIZE 4096

/**
 * \fn		int get_next_line(const int fd, char **line)
 * \brief	Returns a line read from a file descriptor.
 * \param	fd File descriptor that will be used to read
 * \param	line Address of a string that will be used to save the line read
 * 		from the file descriptor
 * \return	1 if a line has been read, 0 if the reading has been completed,
 * 		or -1 if an error has happened respectively.
 * \note	This function returns its result without '\\n'.
 */
int	get_next_line(const int fd, char **line);

#endif
