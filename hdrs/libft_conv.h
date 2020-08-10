/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_conv.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 11:56:35 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/10 19:09:16 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONV_H
# define LIBFT_CONV_H

# include "libft.h"

typedef struct s_atof	t_atof;
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

long					ft_atol(const char *str);
float					ft_atof(const char *str);
int						ft_atoi(const char *nptr);
t_u32					ft_atoi_hex(char *str);
char					*ft_itoa(int n);
char					*ft_lftoa(double lf);
char					*ft_uitoa_base(t_u64 n, const char *base);

#endif
