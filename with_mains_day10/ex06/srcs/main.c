/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:15:08 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/14 16:22:02 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int				is_valid_operator(char *str)
{
	if (str[0] != '\0' &&
			(str[0] == '+' || str[0] == '-' || str[0] == '/' ||
				str[0] == '*' || str[0] == '%'))
		return (1);
	else
		return (0);
}

int				calculate(int first, char ope, int second)
{
	int (*ops[5])(int x, int y) = {&add, &sub, &multiply, &div, &mod};
	
	if (ope == '+')
		return (ops[0](first, second));
	else if (ope == '-')
		return (ops[1](first, second));
	else if (ope == '*')
		return (ops[2](first, second));
	else if (ope == '/')
		return (ops[3](first, second));
	else if (ope == '%')
		return (ops[4](first, second));
	else
		return (0);
}

int				operation_is_valid(char ope, int second)
{
	if (ope == '/' && second == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (ope == '%' && second == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else
		return (1);
}

int				main(int argc, char **argv)
{
	int first;
	int second;

	if (argc != 4)
		return (0);
	if (!is_valid_operator(argv[2]))
	{
		ft_putstr("0\n");
		return (0);
	}
	if (ft_str_is_alpha(argv[1]) || ft_str_is_alpha(argv[3]))
	{
		ft_putstr("0\n");
		return (0);
	}
	first = ft_atoi(argv[1]);
	second = ft_atoi(argv[3]);
	if (!operation_is_valid(argv[2][0], second))
		return (0);
	ft_putnbr(calculate(first, argv[2][0], second));
	ft_putchar('\n');
	return (0);
}
