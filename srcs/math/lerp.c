/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lerp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguibout <kguibout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:11:47 by kguibout          #+#    #+#             */
/*   Updated: 2020/04/07 14:59:21 by kguibout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	lerpf(float v0, float v1, float t)
{
	return ((1 - t) * v0 + t * v1);
}

int		lerpi(int min, int max, float t)
{
	return ((1 - t) * min + t * max);
}
