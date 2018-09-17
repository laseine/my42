/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_sqrt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:29:27 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/06 15:36:47 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int rc;
	int i;

	rc = 0;
	if ((nb == 0) || (nb == 1))
	{
		return (nb);
	}
	else if (nb > 2)
	{
		i = 1;
		while (i <= (nb / 2))
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
	}
	return (rc);
}
