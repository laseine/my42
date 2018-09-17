/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/11 16:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	dest = (char*)malloc(sizeof(*dest) * (j));
	if (dest == NULL)
		return (NULL);
	while (i < j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
