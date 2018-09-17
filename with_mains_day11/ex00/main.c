/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 04:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/12 08:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_print_list(t_list *mylist);

void	ft_print_list(t_list *mylist)
{
	if (mylist)
	{
		ft_print_list(mylist->next);
		printf("%s\n", (char *)mylist->data);
	}
}

int		main(void)
{
	t_list	*mylist;
	char	*start;

	start = "Voyons voir ce qu'on pourrait bien lister !";
	mylist = ft_create_elem(start);
	ft_print_list(mylist);
	return (0);
}
