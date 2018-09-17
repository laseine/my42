#include <stdio.h>
#include "ft_list.h"

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());
t_list	*ft_create_elem(void *data);

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
	t_list	*mylist1;
	t_list	*mylist2;

	mylist1 = ft_create_elem("6");
	ft_list_push_front(&mylist1, "4");
	ft_list_push_front(&mylist1, "2");
	ft_list_push_front(&mylist1, "1");
	printf("\ncréation liste 1 : ---------\n");
	ft_print_list(mylist1);
	mylist2 = ft_create_elem("7");
	ft_list_push_front(&mylist2, "5");
	ft_list_push_front(&mylist2, "3");
	printf("\ncréation liste 2 : ---------\n");
	ft_print_list(mylist2);
	printf("\nmerge liste 2 dans liste 1 : ---\n");
	ft_sorted_list_merge(&mylist1, mylist2, ft_strcmp);
	printf("\nresultat liste 1 : ---------\n");
	ft_print_list(mylist1);
	printf("\n");
	return (0);
}