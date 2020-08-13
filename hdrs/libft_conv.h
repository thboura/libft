/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_conv.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 11:56:35 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/13 17:31:59 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONV_H
# define LIBFT_CONV_H

# include "libft.h"

/**
 * \typedef	t_atof
 * \brief	Typedef of s_atof structure.
 */
typedef struct s_atof	t_atof;
/**
 * \struct	s_atof
 * \brief	ft_atof() handler.
 */
struct					s_atof
{
	bool	sign;
	bool	exp_sign;
	double	fraction;
	double	flt_exp;
	double	mul;
	char	*p;
	char	c;
	int		exp;
	int		frac_exp;
	int		mantissa_size;
	int		decimal_point;
	char	*p_exp;
	int		frac1;
	int		frac2;
};

/**
 * \fn		long ft_atol(const char *str)
 * \brief	Convert a string to a long.
 * \return	Long value.
 */
long					ft_atol(const char *str);
/**
 * \fn		float ft_atof(const char *str)
 * \brief	Convert a string to a float.
 * \return	Float value.
 */
float					ft_atof(const char *str);
/**
 * \fn		int ft_atoi(const char *nptr)
 * \brief	Reproduction of atoi() function (convert a string to an int).
 * \return	Int value.
 */
int						ft_atoi(const char *nptr);
/**
 * \fn		t_u32 ft_atoi_hex(char *str)
 * \brief	Convert a string to an unsigned int as hexadecimal value.
 * \return	Unsigned int value.
 */
t_u32					ft_atoi_hex(char *str);
/**
 * \fn		char *ft_itoa(int n)
 * \brief	Convert an int to a string.
 * \return	Pointer on string.
 */
char					*ft_itoa(int n);
/**
 * \fn		char *ft_lftoa(int n)
 * \brief	Convert a double to a string.
 * \return	Pointer on string.
 */
char					*ft_lftoa(double lf);
/**
 * \fn		char *ft_itoa(int n)
 * \brief	Convert an unsigned int to a string (with given base).
 * \return	Pointer on string.
 */
char					*ft_uitoa_base(t_u64 n, const char *base);

#endif
