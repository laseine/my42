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

int	ft_any(char **tab, int (*f)(char*));

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	mafonction_f(char *str)
{
	if (ft_strlen(str) == 1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int reponse_ft_any;
	int (*f)(char*);
	int i;

	argv[argc] = NULL;
	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	f = mafonction_f;
	reponse_ft_any = ft_any(argv, *f);
	printf("\nChaîne dont la taille est 1 ? ft_any : %d\n", reponse_ft_any);
	return (0);
}
