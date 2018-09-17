#include <stdio.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)());

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
		ft_print_list(mylist->next);
		printf("%s\n", (char *)mylist->data);
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

	mylist = ft_create_elem("A");
	ft_list_push_front(&mylist, "Z");
	ft_list_push_front(&mylist, "B");
	ft_list_push_front(&mylist, "C");
	ft_list_push_front(&mylist, "D");
	ft_list_push_front(&mylist, "3");
	ft_list_push_front(&mylist, "G");
	printf("\nAvant -------------------------\n");
	ft_print_list(mylist);
	ft_list_sort(&mylist, ft_strcmp);
	printf("\nApres -------------------------\n");
	ft_print_list(mylist);
	return (0);
}