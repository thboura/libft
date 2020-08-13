/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_io.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 09:05:19 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/13 16:00:16 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H
# define LIBFT_IO_H

# include "libft.h"

/**
 * \fn		void ft_putchar(char c)
 * \brief	Outputs the char c to the standard output.
 */
void	ft_putchar(char c);
/**
 * \fn		void ft_putchar_fd(char c, int fd)
 * \brief	Outputs the char c to the file descriptor fd.
 */
void	ft_putchar_fd(char c, int fd);
/**
 * \fn		void ft_putendl(const char *s)
 * \brief	Outputs the string s to the standard output followed by a '\\n'.
 */
void	ft_putendl(const char *s);
/**
 * \fn		void ft_putendl_fd(const char *s, int fd)
 * \brief	Outputs the string s to the file descriptor fd followed by a '\\n'.
 */
void	ft_putendl_fd(const char *s, int fd);
/**
 * \fn		void ft_putnbr(int n)
 * \brief	Outputs the integer n to the standard output.
 */
void	ft_putnbr(int n);
/**
 * \fn		void ft_putnbr_fd(int n, int fd)
 * \brief	Outputs the integer n to the file descriptor fd.
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * \fn		size_t ft_putnwstr(wchar_t *str, size_t n)
 * \brief	Outputs n characters of the unicode string str to the standard
 * 		output.
 * \return	Number of bytes written.
 */
size_t	ft_putnwstr(wchar_t *str, size_t n);
/**
 * \fn		size_t ft_putnwstr_fd(wchar_t *str, size_t n, int fd)
 * \brief	Outputs n characters of the unicode string str to the file
 * 		descriptor fd.
 * \return	Number of bytes written.
 */
size_t	ft_putnwstr_fd(wchar_t *str, size_t n, int fd);
/**
 * \fn		void ft_putnstr(char *s, size_t n)
 * \brief	Outputs n characters of the string s to the standard output.
 */
void	ft_putnstr(char *s, size_t n);
/**
 * \fn		void ft_putnstr_fd(char *s, size_t n, int fd)
 * \brief	Outputs n characters of the string s to the file descriptor fd.
 */
void	ft_putnstr_fd(char *s, size_t n, int fd);
/**
 * \fn		void ft_putstr(const char *s)
 * \brief	Outputs the string s to the standard output.
 */
void	ft_putstr(const char *s);
/**
 * \fn		void ft_putstr_fd(const char *s, int fd)
 * \brief	Outputs the string s to the file descriptor fd.
 */
void	ft_putstr_fd(const char *s, int fd);
/**
 * \fn		size_t ft_putwchar(wchar_t c)
 * \brief	Outputs the unicode char c to the standard output.
 * \return	Number of bytes written.
 */
size_t	ft_putwchar(wchar_t c);
/**
 * \fn		size_t ft_putwchar_fd(wchar_t c, int fd)
 * \brief	Outputs the unicode char c to the file descriptor fd.
 * \return	Number of bytes written.
 */
size_t	ft_putwchar_fd(wchar_t c, int fd);
/**
 * \fn		size_t ft_putwstr(wchar_t *str)
 * \brief	Outputs the unicode string str to the standard output.
 * \return	Number of bytes written.
 */
size_t	ft_putwstr(wchar_t *str);
/**
 * \fn		size_t ft_putwstr_fd(wchar_t *str, int fd)
 * \brief	Outputs the unicode string str to the file descriptor fd.
 * \return	Number of bytes written.
 */
size_t	ft_putwstr_fd(wchar_t *str, int fd);

#endif
