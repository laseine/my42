/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/11 16:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char *src;
	char *src2;

	src = "abcdef 123\0";
	src2 = "\0";
	printf("\nsrc = \"%s\"\n", src);
	printf("ft_strdup = \"%s\"\n", ft_strdup(src));
	printf("   strdup = \"%s\"\n----\n", strdup(src));
	printf("\nsrc = \"%s\"\n", src2);
	printf("ft_strdup = \"%s\"\n", ft_strdup(src2));
	printf("   strdup = \"%s\"\n----\n", strdup(src2));
	return (0);
}
