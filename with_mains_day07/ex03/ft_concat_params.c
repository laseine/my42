/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/11 16:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	char	*result;
	int		i;
	int		j;

	str = NULL;
	result = NULL;
	if (argc > 0)
	{
		str = malloc(sizeof(argv));
		result = str;
		i = 1;
		while (i < argc)
		{
			j = 0;
			if (i != 1)
				*str++ = '\n';
			while (argv[i][j] != '\0')
				*str++ = argv[i][j++];
			++i;
		}
		*str = '\0';
	}
	return (result);
}
