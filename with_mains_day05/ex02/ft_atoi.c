/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:29:17 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/02 11:36:07 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int	signe;

	if (!str)
		return (0);
	signe = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -1;
		str++;
	}
	nbr = 0;
	while (str && *str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (int)*str - 48;
		str++;
	}
	return (signe * nbr);
}
