#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*tmp;
	t_list		*list;
	int 		i;

	list = NULL;
	tmp = NULL;
	if (ac <= 0)
		return (NULL);
	if (av[0])
		list = ft_create_elem(av[0]);
	i = 1;
	while (i < ac && av[i])
	{
		tmp = ft_create_elem(av[i]);
		if (tmp)
		{
			tmp->next = list;
			list = tmp;
		}
		i++;
	}
	return (list);
}
