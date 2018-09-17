
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list_ptr;
	void	*tmp;

	list_ptr = *begin_list;
	while (list_ptr)
	{
		if (list_ptr->next)
		{
			if ((*cmp)(list_ptr->data, list_ptr->next->data) < 0)
			{
				tmp = list_ptr->data;
				list_ptr->data = list_ptr->next->data;
				list_ptr->next->data = tmp;
				list_ptr = *begin_list;
			}		
		}
		list_ptr = list_ptr->next;
	}
}