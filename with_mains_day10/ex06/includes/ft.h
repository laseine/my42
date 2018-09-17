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

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
int		ft_atoi(char *str);
int		ft_str_is_alpha(char *str);
int		ft_is_numeric(char *str);
int		sub(int i, int j);
int		add(int i, int j);
int		div(int i, int j);
int		mod(int i, int j);
int		multiply(int i, int j);

#endif
