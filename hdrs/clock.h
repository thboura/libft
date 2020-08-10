/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clock.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:00:06 by killian           #+#    #+#             */
/*   Updated: 2020/08/10 19:08:33 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLOCK_H
# define CLOCK_H

# include "libft.h"

typedef struct s_clock	t_clock;
struct					s_clock
{
	t_u64	elapsed_time;
	t_u64	ref_time;
	bool	paused;
};

t_u64					get_elapsed_microseconds(void);
t_u64					clock_get_microseconds(t_clock *clock);
t_u64					clock_get_milliseconds(t_clock *clock);
double					clock_get_seconds(t_clock *clock);
void					clock_pause(t_clock *clock);
void					clock_unpause(t_clock *clock);
bool					clock_is_pause(t_clock *clock);
t_u64					clock_restart(t_clock *clock);
void					clock_set_milliseconds(t_clock *clock, t_u64 time);

#endif
