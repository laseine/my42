/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 00:13:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/12 04:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*mylist;

	mylist = ft_create_elem(data);
	if (mylist)
	{
		mylist->data = data;
		mylist->next = *begin_list;
		*begin_list = mylist;
	}
}
