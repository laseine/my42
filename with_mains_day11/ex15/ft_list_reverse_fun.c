#include "ft_list.h"

unsigned int	ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (begin_list)
	{
		i++;
		if (i == nbr)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list 		*list1;
	t_list 		*list2;
	unsigned	n;
	unsigned 	i;
	char		*tmp;
 
 	tmp = NULL;
	n = ft_list_size(begin_list);
	i = 1;
	if(n > 1)
	{
		while (i <= n / 2)
		{
			list1 = ft_list_at(begin_list, i);
			list2 = ft_list_at(begin_list, n + 1 - i);
			tmp = list1->data;
			list1->data = list2->data;
			list2->data = tmp;
			i++;		
		}
	}
}