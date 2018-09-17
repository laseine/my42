#include "ft_list.h"
#include <stdio.h>

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

void 	printlist(t_list *plist, char *message, char *sd, char *d, int w)
{
	t_list	*toprint;

	toprint = plist;
	printf("\n----%s / sdata : %s / data : %s / where %d \n", message, sd, d, w);
	while(toprint)
	{
		printf(", %s ", toprint->data);
		toprint = toprint->next;
	}
	printf("\n---------------------\n");
}


void	ft_insert_extrem(t_list **begin_list, void *sdata, void *data, int where)
{
	t_list	*ilist;
	t_list	*current;

	ilist = ft_create_elem(data);
	current = *begin_list;

printlist(current, "AJOUT EXTREME", sdata, data, where);

	if (where == 1)
	{
		while (current)
			current = current->next;
		current->next = ilist;
	}
	else if (where == 0)
	{
		while (current && current->data != sdata)
			current = current->next;
		printf("__________________%s\n", current->data);
		current->next = ilist;
		ilist->next = current->next;
	}
	else if (where == -1)
	{
		ilist->next = *begin_list;
		*begin_list = ilist;
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
		*begin_list = slist;

printlist(*begin_list, "REVERSE", "-", data, 9);

		if ((*cmp)(slist->data, data) >= 0)
			ft_insert_extrem(begin_list, NULL, data, -1);// insérer en debut
		else
		{
			while (slist && slist->next && (*cmp)(slist->data, data) < 0)
			{
				current = slist;
				slist = slist->next;
			}
			if (slist && slist->next)
				ft_insert_extrem(begin_list, current->data, data, 0);// insérer au milieu
			else
				ft_insert_extrem(begin_list, NULL, data, 1);// insérer en fin
				slist->next = ilist; // insérer en fin
		}
	}
	else
		slist = ft_create_elem(data);
}