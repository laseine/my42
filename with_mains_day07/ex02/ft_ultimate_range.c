/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/11 16:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	taille;
	int	*rng;
	int	i;

	i = 0;
	if (min < max)
	{
		taille = max - min;
		rng = malloc(sizeof(int *) * (taille + 1));
		while (taille > 0)
		{
			rng[i] = min + i;
			taille--;
			i++;
		}
		*range = rng;
	}
	else
	{
		*range = NULL;
		return (0);
	}
	return (i);
}
