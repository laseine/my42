/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/11 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}