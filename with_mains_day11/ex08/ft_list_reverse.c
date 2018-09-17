#include "ft_list.h"
#include <stdio.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous;
	t_list *current;
 
 	previous = NULL;
 	current = NULL;
	if(begin_list)
	{
		current = *begin_list;
		while (current)
		{
			t_list *pnext;
			pnext = current->next;
			current->next = previous;
			previous = current;
			current = pnext;		
		}
		*begin_list = previous;
	}
}