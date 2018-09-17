#include <stdio.h>
#include "ft_list.h"

void 	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

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

int   ft_strcmp(const char *s1, const char *s2)
{
  if (s1 && s2)
  {
    while (*s1 == *s2)
    {
      if (*s1 == '\0')
        return (0);
      s1++;
      s2++;
    }
    if (*(unsigned char *)s1 > *(unsigned char *)s2)
      return (1);
    else
      return (-1);
  }
  return (0);
}

int		main()
{
	t_list	*mylist;

	mylist = ft_create_elem("6");
	ft_list_push_front(&mylist, "5");
	ft_list_push_front(&mylist, "3");
	ft_list_push_front(&mylist, "2");
	printf("\ncréation : -------------------------\n");
	ft_print_list(mylist);
	printf("\najout de \"1\" : -------------------------\n");
	ft_sorted_list_insert(&mylist, "1", ft_strcmp);
	ft_print_list(mylist);
	printf("\najout de \"4\" : -------------------------\n");
	ft_sorted_list_insert(&mylist, "4", ft_strcmp);
	ft_print_list(mylist);
	printf("\najout de \"9\" : -------------------------\n");
	ft_sorted_list_insert(&mylist, "9", ft_strcmp);
	ft_print_list(mylist);
	printf("\n");
	return (0);

}