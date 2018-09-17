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

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *tab;
	int i;
	int len;
	int max;
	int min;

	max = 37;
	min = 13;
	i = -1;
	len = ft_ultimate_range(&tab, min, max);
	printf("ft_ultimate_range(%d, %d) ==> taille du range = %d\n", min, max, len);
	while (i++ < len - 1)
		printf("tab[%d] = %d\n", i, tab[i]);
	printf("-------\n");
	max = 42;
	min = 42;
	len = ft_ultimate_range(&tab, min, max);
	printf("ft_ultimate_range(%d, %d) ==> taille du range = %d\n", min, max, len);
	return (0);
}
