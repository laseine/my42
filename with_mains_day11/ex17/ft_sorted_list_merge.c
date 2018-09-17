#include "ft_list.h"

int   my_strcmp(const char *s1, const char *s2)
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

int 	is_sorted(t_list *begin_list)
{
	t_list	*current;

	current = begin_list;
	while (current && current->next)
	{
		if (my_strcmp(current->data, current->next->data) > 0)
			return (0);
		current = current->next;
	}
	return (1);
}

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

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous;
	t_list *current;
 
 	previous = NULL;
 	current = NULL;
	if(begin_list)
	{
		current = *begin_list;
		while (current)
		{
			t_list *pnext;
			pnext = current->next;
			current->next = previous;
			previous = current;
			current = pnext;		
		}
		*begin_list = previous;
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*slist;
	t_list	*ilist;
	t_list	*current;

	slist = *begin_list;
	ilist = NULL;
	current = NULL;
	if (slist)
	{
		if (!is_sorted(slist))
			ft_list_reverse(&slist);
		if ((*cmp)(slist->data, data) >= 0)
		{
			ilist = ft_create_elem(data);
			ilist->next = slist;
			*begin_list = ilist;
		}
		else
		{
			while (slist && slist->next && (*cmp)(slist->data, data) < 0)
			{
				current = slist;
				slist = slist->next;
			}
			ilist = ft_create_elem(data);
			if (slist && slist->next)
			{
				ilist->next = slist;
				current->next = ilist;
			}
			else
			{
				slist->next = ilist;
			}
		}
	}
	else
	{
		slist = ft_create_elem(data);
	}
}

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list 	*current1;
	t_list 	*current2;

	current1 = *begin_list1;
	if (is_sorted(current1) == 0)
		ft_list_reverse(&current1);
	*begin_list1 = current1;
	current2 = begin_list2;
	while (current2)
	{
		ft_sorted_list_insert(&current1, current2->data, (*cmp));
		current2 = current2->next;
	}
}
