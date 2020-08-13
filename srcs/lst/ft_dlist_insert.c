/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:02:24 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/13 14:57:30 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

t_dlist	*ft_dlist_insert(t_dlist_handler *handler, t_dlist *node, t_dlist *new)
{
	if (!new || !node)
		return (NULL);
	new->next = node;
	new->prev = node->prev;
	if (node->prev != NULL)
		new->prev->next = new;
	node->prev = new;
	if (handler->head == node)
		handler->head = new;
	handler->size++;
	return (new);
}
