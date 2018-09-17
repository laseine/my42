/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:29:17 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/02 11:36:07 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char chiffre;

	chiffre = '0';
	while (chiffre <= '9')
	{
		ft_putchar(chiffre);
		chiffre++;
	}
}
