#include <stdio.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list);


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

void	ft_print_list(t_list *mylist)
{
	if (mylist)
	{
		printf("%s\n", mylist->data);
		ft_print_list(mylist->next);
	}
}

int		main()
{
	t_list	*mylist;

	mylist = ft_create_elem("1");
	ft_list_push_front(&mylist, "2");
	ft_list_push_front(&mylist, "3");
	ft_list_push_front(&mylist, "4");
	printf("\navant : -------------------------\n");
	ft_print_list(mylist);
	printf("\napres : -------------------------\n");
	ft_list_reverse_fun(mylist);
	ft_print_list(mylist);
	printf("\n");
	return (0);
}