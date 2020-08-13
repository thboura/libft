/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clock.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:00:06 by killian           #+#    #+#             */
/*   Updated: 2020/08/13 19:00:02 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLOCK_H
# define CLOCK_H

# include "libft.h"

/**
 * \typedef	t_clock
 * \brief	Typedef of s_clock structure.
 */
typedef struct s_clock	t_clock;
/**
 * \struct	s_clock
 * \brief	Custom clock (timer).
 */
struct					s_clock
{
	t_u64	elapsed_time;	/**< Time passed during pause */
	t_u64	ref_time;		/**< Time at clock start */
	bool	paused;			/**< Check if timer is paused or not */
};

/**
 * \fn		t_u64 get_elapsed_microseconds(void)
 * \brief	Returns the number of microseconds passed since Unix epoch.
 * \return	Number of microseconds.
 */
t_u64					get_elapsed_microseconds(void);
/**
 * \fn		t_u64 clock_get_microseconds(t_clock *clock)
 * \brief	Returns the  number of microseconds passed since a given clock
 * 		start.
 * \return	Number of microseconds.
 */
t_u64					clock_get_microseconds(t_clock *clock);
/**
 * \fn		t_u64 clock_get_milliseconds(t_clock *clock)
 * \brief	Returns the  number of milliseconds passed since a given clock
 * 		start.
 * \return	Number of milliseconds.
 */
t_u64					clock_get_milliseconds(t_clock *clock);
/**
 * \fn		double clock_get_seconds(t_clock *clock)
 * \brief	Returns the  number of seconds passed since a given clock
 * 		start.
 * \return	Number of seconds.
 */
double					clock_get_seconds(t_clock *clock);
/**
 * \fn		void clock_pause(t_clock *clock)
 * \brief	Set a clock to pause.
 */
void					clock_pause(t_clock *clock);
/**
 * \fn		void clock_unpause(t_clock *clock)
 * \brief	Unset a clock pause status.
 */
void					clock_unpause(t_clock *clock);
/**
 * \fn		bool clock_is_pause(t_clock *clock)
 * \brief	Verify if a clock is paused or not.
 * \return	True if clock is paused, or false otherwise.
 */
bool					clock_is_pause(t_clock *clock);
/**
 * \fn		t_u64 clock_restart(t_clock *clock)
 * \brief	Start or restart a clock.
 * \return	Number of microseconds spent while the clock was running.
 */
t_u64					clock_restart(t_clock *clock);
/**
 * \fn		void clock_set_milliseconds(t_clock *clock, t_u64 time)
 * \brief	Set clock to a given time.
 */
void					clock_set_milliseconds(t_clock *clock, t_u64 time);

#endif
