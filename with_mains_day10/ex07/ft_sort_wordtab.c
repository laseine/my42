/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:10:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/14 17:22:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(char *s1, char *s2)
{
        int     i;

        i = 0;
        while (s1[i] != '\0' && s2[i] != '\0')
        {
                if (s1[i] != s2[i])
                        return (s1[i] - s2[i]);
                i++;
        }
        if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
                return (s1[i] - s2[i]);
        return (0);
}

void    ft_swap(char **a, char **b)
{
        char    *tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}

void    ft_sort_wordtab(char **tab)
{
        int     i;
        int     sorted;

        sorted = 0;
        while (!sorted)
        {
                i = 0;
                sorted = 1;
                while (tab[++i])
                        if (ft_strcmp(tab[i - 1], tab[i]) > 0)
                        {
                                ft_swap(tab + i - 1, tab + i);
                                sorted = 0;
                        }
                }
        }
}

