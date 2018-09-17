/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:13:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/13 18:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*g)(int))
{
	int *tmp;
	int i;

	i = 0;
	tmp = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		tmp[i] = g(tab[i]);
		i++;
	}
	return (tmp);
}
