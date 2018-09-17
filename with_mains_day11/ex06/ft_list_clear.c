/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelbouha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 11:09:43 by lelbouha          #+#    #+#             */
/*   Updated: 2016/02/03 14:42:28 by lelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*element;
	
	element = *begin_list;
	while (element == *begin_list)
	{
		*begin_list = element->next;
		free(element);
		if (element->next)
			element = element->next;
	}
}
