
#include <stdio.h>
#include "ft_list.h"

t_list *ft_list_push_params(int ac, char **av);

void	ft_print_list(t_list *mylist)
{
	if (mylist)
	{
		printf("%s\n", (char *)mylist->data);
		ft_print_list(mylist->next);
	}
}

int		main(int argc, char **argv)
{
	t_list	*mylist;

	if (argc > 1)
	{
		mylist = ft_list_push_params(argc, argv);
		ft_print_list(mylist);
	}
	return (0);
}
