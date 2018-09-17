/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@1337.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 04:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/12 08:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	else
		ft_putchar(nbr + '0');
}

void	ft_putnbr_clean(int nbr)
{
	ft_putnbr(nbr);
	ft_putchar('\n');
}

void	mafonction_f(int i)
{
	printf("cette fonction affiche les élèments du tableau : %d\n", i);
}

void	ft_foreach(int *tab, int lenght, void (*f)(int));

/* déclaration du pointeur sur fonction f = mafonction_f
** Initialisation de la fonction ft_foreach(tab, 5, (f))
** Appel de la fonction ft_foreach(tab, 5, (f))
*/

int		main(void)
{
	int		i;
	int		tab[5] = {0, 1337, 42, +1, -1};
	void	(*f)(int);

	printf("tableau d'entiers\n");
	i = 0;
	while (i < 5)
	{
		printf("tab[%d]:%d\n", i, tab[i]);
		i++;
	}
	printf("----------\n");
	f = mafonction_f;
	ft_foreach(tab, 5, (f));
	i = 0;
	printf("----------\n");
	ft_foreach(tab, 5, &ft_putnbr_clean);
	ft_putchar('\n');
	return (0);
}
