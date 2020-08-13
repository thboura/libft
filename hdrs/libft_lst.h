/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:46:34 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/13 15:24:32 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_H
# define LIBFT_LST_H

# include "libft.h"

/**
 * \typedef	t_list
 * \brief	Typedef of s_list structure.
 */
typedef struct s_list			t_list;
/**
 * \struct	s_list
 * \brief	Singly-linked list node.
 */
struct							s_list
{
	void	*content;		/**< Content */
	size_t	content_size;	/**< Storage size of content */
	t_list	*next;			/**< Pointer to the next node */
};

/**
 * \typedef	t_dlist
 * \brief	Typedef of s_dlist structure.
 */
typedef struct s_dlist			t_dlist;
/**
 * \struct	s_dlist
 * \brief	Doubly-linked list node.
 */
struct							s_dlist
{
	void		*content;		/**< Content */
	size_t		content_size;	/**< Storage size of content */
	t_dlist		*next;			/**< Pointer to the next node */
	t_dlist		*prev;			/**< Pointer to the previous node */
};

/**
 * \typedef	t_dlist_handler
 * \brief	Typedef of s_dlist_handler structure.
 */
typedef struct s_dlist_handler	t_dlist_handler;
/**
 * \struct	s_dlist_handler
 * \brief	Doubly-linked list handler.
 */
struct							s_dlist_handler
{
	t_dlist	*head;	/**< Pointer to the first node */
	t_dlist	*tail;	/**< Pointer to the last node */
	size_t	size;	/**< Number of nodes */
};

/*
**	Singly-linked list functions
*/

/**
 * \fn		void ft_lstadd(t_list **alst, t_list *new)
 * \brief	Adds a new node at the beginning of a given singly-linked list.
 * \param	alst Address of extended list first node
 * \param	new New node
 */
void							ft_lstadd(t_list **alst, t_list *new);
/**
 * \fn		void ft_lstaddend(t_list **alst, t_list *new)
 * \brief	Adds a new node at the end of a given singly-linked list.
 * \param	alst Address of extended list first node
 * \param	new New node
 */
void							ft_lstaddend(t_list **alst, t_list *new);
/**
 * \fn		void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
 * \brief	Deletes a given singly-linked list.
 * \param	alst Address of deleted list first node
 * \param	del Function to use to delete nodes content
 */
void							ft_lstdel(t_list **alst, void (*del)(void *,
	size_t));
/**
 * \fn		void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
 * \brief	Deletes a given singly-linked list node.
 * \param	alst Address of deleted node
 * \param	del Function to use to delete node content
 */
void							ft_lstdelone(t_list **alst, void (*del)(void *,
	size_t));
/**
 * \fn		void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
 * \brief	Iterates on each node of a singly-linked list and applies a given
 * 		function on them.
 * \param	lst First node of the list
 * \param	f Function to apply on nodes
 */
void							ft_lstiter(t_list *lst,
	void (*f)(t_list *elem));
/**
 * \fn		t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
 * \brief	Applies the function f to each node of the singly-linked list given
 * 		as argument to create a “fresh” new list resulting from the successive
 * 		applications of f.
 * \return	Pointer to the first node of the "fresh" list.
 * 		\n	If the allocation fails or lst is NULL, returns NULL.
 */
t_list							*ft_lstmap(t_list *lst,
	t_list *(*f)(t_list *elem));
/**
 * \fn		t_list *ft_lstnew(const void *content, size_t content_size)
 * \brief	Allocates and returns a singly-linked list node with a given content
 * 		copied in it.
 * \return	Pointer on node, or NULL if an allocation failed.
 */
t_list							*ft_lstnew(const void *content,
	size_t content_size);

/*
**	Doubly-linked list functions
*/

/**
 * \fn		t_dlist_handler *ft_dlist_create(void)
 * \brief	Allocates and returns a "fresh" doubly-linked list handler.
 * \return	Pointer on handler.
 */
t_dlist_handler					*ft_dlist_create(void);
/**
 * \fn		t_dlist *ft_dlist_get_by_index(t_dlist_handler *list, size_t index)
 * \brief	Returns the doubly-linked list node at given index.
 * \return	Pointer on node, or NULL if not found.
 */
t_dlist							*ft_dlist_get_by_index(t_dlist_handler *list,
	size_t index);
/**
 * \fn		size_t ft_dlist_get_index(t_dlist_handler *list, t_dlist *dlist)
 * \brief	Returns the index of a given doubly-linked list node.
 * \param	list List handler
 * \param	dlist Node
 * \return	Index of the node, or casted -1 if not found.
 */
size_t							ft_dlist_get_index(t_dlist_handler *list,
	t_dlist *dlist);
/**
 * \fn		t_dlist *ft_dlist_insert(t_dlist_handler *handler, t_dlist *node,
 * 		t_dlist *new)
 * \brief	Inserts a new node in a doubly-linked list at a given node location.
 *
 * \sa		Node at previous insert location will become the next node of the
 * 		new one.
 * \param	handler Handler of the list
 * \param	node Future next node of the new one
 * \param	new New node to insert
 * \return	Pointer on new node, or NULL if one of the nodes given as argument
 * 		is NULL.
 * \note	Giving wrong handler as parameter will result in undefined
 * 		behaviour.
 */
t_dlist							*ft_dlist_insert(t_dlist_handler *handler,
	t_dlist *node, t_dlist *new);
/**
 * \fn		t_dlist *ft_dlistaddend(t_dlist_handler *dlist_handler,
 * 		t_dlist *node)
 * \brief	Add a new node at the end of a doubly-linked list.
 * \return	Pointer on the new node, or NULL if given node is NULL.
 */
t_dlist							*ft_dlistaddend(t_dlist_handler *dlist_handler,
	t_dlist *node);
/**
 * \fn		t_dlist *ft_dlistaddfront(t_dlist_handler *dlist_handler,
 * 		t_dlist *node)
 * \brief	Add a new node at the front of a doubly-linked list.
 * \return	Pointer on the new node, or NULL if given node is NULL.
 */
t_dlist							*ft_dlistaddfront(t_dlist_handler\
	*dlist_handler, t_dlist *node);
/**
 * \fn		void ft_dlistdel(t_dlist_handler **dlist_handler,
 * 		void (*del)(void *))
 * \brief	Deletes a given doubly-linked list.
 * \param	dlist_handler Address of deleted list handler
 * \param	del Function to use to delete nodes content
 */
void							ft_dlistdel(t_dlist_handler **dlist_handler,
	void (*del)(void *));
/**
 * \fn		void ft_dlistdelone(t_dlist_handler *dlist_handler, t_dlist *list,
 * 		void (*del)(void *))
 * \brief	Deletes a given doubly-linked list node.
 * \param	dlist_handler Node list handler
 * \param	list Address of deleted node
 * \param	del Function to use to delete node content
 */
void							ft_dlistdelone(t_dlist_handler *dlist_handler,
	t_dlist *list, void (*del)(void *));
/**
 * \fn		t_dlist *ft_dlistnew(const void *content, size_t content_size)
 * \brief	Allocates and returns a doubly-linked list node with a given content
 * 		copied in it.
 * \return	Pointer on node, or NULL if an allocation failed.
 */
t_dlist							*ft_dlistnew(const void *content,
	size_t content_size);

#endif
