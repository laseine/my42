/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2016/02/27 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*g_hexabase = "0123456789abcdef\0";
void		ft_putchar(char c);

void		ft_putnbr_base_x(int n, const char *base)
{
	long	nbr;
	int		b;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (*base)
	{
		b = 0;
		while (base[b] != '\0')
			b++;
		if (nbr >= b && b > 1)
		{
			ft_putnbr_base_x(nbr / b, base);
			ft_putnbr_base_x(nbr % b, base);
		}
		nbr = (int)(nbr);
		ft_putchar(base[nbr]);
	}
}

void		ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str > 31 && *str < 126)
		{
			ft_putchar(*str);
			str++;
		}
		else
		{
			ft_putchar('\\');
			ft_putnbr_base_x(*str, g_hexabase);
			str++;
		}
	}
	ft_putchar('\n');
}
