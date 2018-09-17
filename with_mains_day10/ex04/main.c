/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:13:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/13 18:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*));

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int		n;
	int		(*pf)(char*);
	char	*p;

	n = 0;
	pf = &ft_strlen;
	while (n < argc)
	{
		p = argv[n];
		printf("arg%d :\t%s\t\t\t%d\n", n + 1, p, ft_strlen(p));
		n++;
	}
	n = ft_count_if(argv, pf);
	printf("\n%d - il y a %d arguments dont [f(argument)==1]\n", n, n);
	return (0);
}
