/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/10 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*(str++));
}

void	ft_print_words_tables(char **tab)
{
	int		i;

	while (tab && *tab)
	{
		i = 0;
		while ((*tab)[i])
			ft_putchar((*tab)[i++]);
		ft_putchar('\n');
		++tab;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	while (par && par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		++par;
	}
}
