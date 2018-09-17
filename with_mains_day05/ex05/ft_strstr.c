/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2016/02/27 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int f;

	if (to_find[0] == '\0')
	{
		return (char*)(str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = i;
		f = 0;
		while (str[j] == to_find[f])
		{
			j++;
			f++;
			if (to_find[f] == '\0')
			{
				return (char*)(&str[i]);
			}
		}
		i++;
	}
	return (0);
}
