/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2016/02/27 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if ((str[i] < 'A') || (str[i] > 'Z'))
				return (0);
			++i;
		}
		return (1);
	}
	return (1);
}
