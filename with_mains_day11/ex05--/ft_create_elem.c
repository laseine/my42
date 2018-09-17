
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
