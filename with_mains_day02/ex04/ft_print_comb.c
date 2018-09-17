/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:29:17 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/02 11:36:07 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char centaines;
	char dizaines;
	char unites;

	centaines = '0' - 1;
	while (centaines++ <= '9')
	{
		dizaines = centaines + 1;
		while (dizaines <= '9')
		{
			unites = dizaines + 1;
			while (unites <= '9')
			{
				ft_putchar(centaines);
				ft_putchar(dizaines);
				ft_putchar(unites++);
				if (!(centaines == '7'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			dizaines++;
		}
	}
}
