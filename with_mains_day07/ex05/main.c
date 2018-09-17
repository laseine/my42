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

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab);

int		main(void)
{
	char	str[255] = "Espace tabulation	retour_à_la_ligne\nfin_de_la_chaîne\0";
	char	**res;

	printf("Chaîne de départ : \n\"%s\"\n", str);
	printf("-----------------------------------------------\n");
	res = ft_split_whitespaces(str);
	ft_print_words_tables(res);
	
	return (0);
}
