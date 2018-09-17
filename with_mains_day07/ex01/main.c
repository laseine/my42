/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/11 16:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *tab;
	int i;
	int max;
	int min;

	max = 37;
	min = 13;
	i = -1;
	tab = ft_range(min, max);
	printf("ft_range(%d, %d)\n", min, max);
	while (i++ < (max - min))
		printf("tab[%d] = %d\n", i, tab[i]);
	printf("-------\n");
	max = 42;
	min = 42;
	tab = ft_range(min, max);
	printf("ft_range(%d, %d)\n", min, max);
	return (0);
}
