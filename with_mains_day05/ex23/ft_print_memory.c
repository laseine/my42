/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2016/02/27 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*g_hexbase = "0123456789abcdef";
void				ft_putchar(char c);

static void			ft_putstring(char *str, unsigned int len,
	int hex, int space)
{
	unsigned int	i;

	i = 0;
	while (len > i)
	{
		if (hex)
		{
			ft_putchar(g_hexbase[(int)((unsigned char)str[i] / 16)]);
			ft_putchar(g_hexbase[(int)((unsigned char)str[i] % 16)]);
		}
		else if (str[i] < 127 && str[i] > 31)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		if (space && (int)i % space == space - 1)
			ft_putchar(' ');
		++i;
	}
}

static void			ft_puthexa(int octet, int decalbit)
{
	if (decalbit > 1)
		ft_puthexa(octet >> 4, decalbit - 1);
	ft_putchar(*(g_hexbase + (octet % 16)));
}

static void			ft_putline(char *addr, unsigned int nbbit,
	unsigned int size)
{
	ft_puthexa(nbbit, 8);
	ft_putchar(':');
	ft_putchar(' ');
	ft_putstring(addr + nbbit, size, 1, 2);
	ft_putchar(' ');
	ft_putstring(addr + nbbit, size, 0, 0);
	ft_putchar('\n');
}

void				*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	oct;

	oct = 0;
	while (size - 16 > oct && size - 16 > 0)
	{
		ft_putline(addr, oct, 16);
		oct += 16;
	}
	if (size - oct > 0)
		ft_putline(addr, oct, size - oct);
	return (addr);
}
