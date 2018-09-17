/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:29:27 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/06 15:36:47 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;
	int is_found;
	int is_prime;

	if (nb <= 2)
		return(2);
	is_found = 0;
	while (is_found == 0)
	{
		i = 2;
		is_prime = 1;
		while ((i <= (nb / i)) && (is_prime == 1))
		{
			if ((nb % i) == 0)
				is_prime = 0;
			else
				i++;
		}
		if (is_prime == 1)
			is_found = 1;
		else
			nb++;
	}
	return (nb);
}
