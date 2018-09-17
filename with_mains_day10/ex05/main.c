/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:13:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/13 18:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	fonction_f(int i, int j)
{
	return (i - j);
}

int	main(void)
{
	int tab1[3] = {13, 37, 42};
	int tab2[3] = {42, 13, 37};
	int tab3[3] = {1337, 1337, 1337};
	int k;

	k = ft_is_sort(tab1, 3, &fonction_f);
	printf("%d  {13, 37, 42} est un tableau %s\n", k,
		(k == 1) ? "trié" : "non trié");
	k = ft_is_sort(tab2, 3, &fonction_f);
	printf("%d  {42, 13, 37} est un tableau %s\n", k,
		(k == 1) ? "trié" : "non trié");
	k = ft_is_sort(tab3, 3, &fonction_f);
	printf("%d  {1337, 1337, 1337} est un tableau %s\n", k,
		(k == 1) ? "trié" : "non trié");
	return (0);
}
