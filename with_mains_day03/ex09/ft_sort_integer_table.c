/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:29:17 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/02 11:36:07 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	current;
	int	tmp;

	current = 0;
	while (current < size - 1)
	{
		if (tab[current] > tab[current + 1])
		{
			tmp = tab[current];
			tab[current] = tab[current + 1];
			tab[current + 1] = tmp;
			current = 0;
		}
		else
			current++;
	}
}
