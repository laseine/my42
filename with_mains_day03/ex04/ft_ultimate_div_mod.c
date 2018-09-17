/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:29:17 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/02 11:36:07 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int quotient;
	int reste;

	if (*b != 0)
	{
		quotient = *a / *b;
		reste = *a % *b;
		*a = quotient;
		*b = reste;
	}
}
