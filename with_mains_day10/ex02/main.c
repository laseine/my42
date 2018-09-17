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
//#include <stdlib.h>

int 	mafonction_g(int i)
{
	return (2 * i);
}

int	*ft_map(int *tab, int length, int (*g)(int));

int		main(void)
{
	int tab[4] = {1,2,3,4};
	int *dTab;
	int k;
	int (*g)(int);						/*déclaration du pointeur sur fonction pour g*/

	g = mafonction_g;					/*Initialisation pour g*/
	dTab = ft_map(tab, 4, (*g)); 		/*Appel g*/
	k = 0;
	while (k < 4)
	{
      	printf("tab[%d] = %d, Application de la fonction f(x) = 2 * x ==> tab[%d] = %d\n", k, tab[k], k, dTab[k]);
      	k++;
	}
	return(0);
}
