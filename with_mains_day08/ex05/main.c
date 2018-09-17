/*/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/10 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

int					main(int argc, char **argv)
{
	struct s_stock_par *par;

	par = ft_param_to_tab(argc, argv);
	ft_show_tab(par);
	return (0);
}
