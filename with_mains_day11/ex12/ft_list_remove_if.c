
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*list_previous;

	list_ptr = *begin_list;
	while (list_ptr)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			list_previous->next = list_ptr->next;
			free (list_ptr);
		}
		else
		{
			list_previous = list_ptr;
		}
		list_ptr = list_ptr->next;
	}
}