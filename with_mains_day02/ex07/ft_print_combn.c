/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:29:17 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/02 11:36:07 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		incremente(int compteur, int n, int *tab)
{
	if (compteur > 0)
	{
		compteur--;
		if (tab[compteur] + (n - 1 - compteur) != 9)
		{
			tab[compteur]++;
			while (++compteur <= n)
				tab[compteur] = tab[compteur - 1] + 1;
			compteur = n - 1;
		}
		else	if (n != 1)
			compteur = incremente(compteur, n, tab);
	}
	return (compteur);
}

void	ft_print_value(int *tab, int n)
{
	int pos;

	pos = 0;
	while (pos < n)
		ft_putchar(tab[pos++] + '0');
	if (tab[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int tab[10];
	int compteur;

	if (n > 9)
		n = 9;
	if (n < 1)
		n = 1;
	tab[0] = 0;
	compteur = 0;
	while (++compteur < n)
		tab[compteur] = tab[compteur - 1] + 1;
	compteur = n - 1;
	while ((compteur > 0) || (compteur == 0 && n == 1))
	{
		ft_print_value(tab, n);
		if (tab[compteur] + (n - 1 - compteur) != 9)
			tab[compteur]++;
		else	if (n > 1)
			compteur = incremente(compteur, n, tab);
		else
			compteur = -1;
	}
}
