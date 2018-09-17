/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 11:58:10 by lelbouha          #+#    #+#             */
/*   Updated: 2016/01/27 11:58:18 by lelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*mylist;

	mylist = malloc(sizeof(t_list));
	if (mylist)
	{
		mylist->data = data;
		mylist->next = NULL;
	}
	return (mylist);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*mylist;
	t_list		*tmp;

	mylist = ft_create_elem(data);
	tmp = *begin_list;
	if (mylist)
	{
		while (tmp->next != '\0')
			tmp = tmp->next;
		tmp->next = mylist;
	}
}
