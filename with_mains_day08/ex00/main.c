/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c.                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2016/02/27 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char	str[255] = "Espace tabulation(\\t)	retour_à_la_ligne(\\n)\nfin_de_la_chaîne(\\0)\0";
	int		i;
	char	**res;

	printf("Chaîne de départ : \n\"%s\"\n", str);
	printf("-----------------------------------------------\n");
	res = ft_split_whitespaces(str);
	i = 0;
	while (res[i] != 0 && i < 6)
	{
		printf("%d : \"%s\"\n", i + 1, res[i]);
		i++;
	}
	return (0);
}
