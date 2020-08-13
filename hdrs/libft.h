/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 21:40:51 by kuibout           #+#    #+#             */
/*   Updated: 2020/08/13 17:11:56 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdbool.h>
# include <pthread.h>

# include "libft_bitsize.h"
# include "clock.h"
# include "libft_conv.h"
# include "libft_vector.h"
# include "libft_gnl.h"
# include "libft_io.h"
# include "libft_lst.h"
# include "libft_map.h"
# include "libft_math.h"
# include "libft_mem.h"
# include "libft_str.h"
# include "ft_printf/ft_printf.h"

/**
 * \def		INT32MAX
 * \brief	Custom definition of int max value regarding the os.
 */
# ifdef __unix__
#  define INT32MAX __INT32_MAX__
# else
#  define INT32MAX INT32_MAX
# endif

#endif
