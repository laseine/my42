/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:23:04 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/11 16:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	g_signe;
char	*g_bok;

int		ft_rankinstr(char c, char *str)
{
	char	*p;
	int		i;

	i = 0;
	p = str;
	while (*p && c != *p)
	{
		p++;
		i++;
	}
	if (c != *p)
		i = -1;
	return (i);
}

int		ft_quellebase(char *b)
{
	int		i;
	int		j;

	i = 0;
	while (b[i] != '\0')
	{
		if (ft_rankinstr(b[i], g_bok) == -1)
			return (0);
		j = i + 1;
		while (b[j] != '\0' && b[j] != b[i])
			j++;
		if (b[j] == b[i])
			return (0);
		i++;
		j++;
	}
	i = (i > 1) ? i : 0;
	return (i);
}

int		ft_number(char *nb, char *bf)
{
	int		inbr;
	int		ibf;
	char	*p;

	ibf = ft_quellebase(bf);
	inbr = 0;
	p = nb;
	while (*p && *p == ' ')
		p++;
	if (*p && (*p == '+' || *p == '-'))
	{
		g_signe = '-';
		p++;
	}
	while (*p)
	{
		if (ft_rankinstr(*p, g_bok) == -1)
			return (0);
		inbr = inbr * ibf + ft_rankinstr(*p, bf);
		p++;
	}
	return (inbr);
}

char	*ft_convert(int n, int ibt, char *bt)
{
	char	nbreve[128];
	char	*mynb;
	int		i;
	int		j;

	i = 1;
	while (n > 0)
	{
		nbreve[i] = bt[(n % ibt)];
		n /= ibt;
		i++;
	}
	nbreve[i] = '\0';
	mynb = (char*)malloc(sizeof(char) * (i + 1));
	mynb[0] = '-';
	j = (g_signe == '-' ? 1 : 0);
	n = i + j - 1;
	i = n - j;
	while (j < n)
	{
		mynb[j] = nbreve[i];
		i--;
		j++;
	}
	mynb[n] = '\0';
	return (mynb);
}

char	*ft_convert_base(char *nbr, char *bf, char *bt)
{
	g_bok = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	g_signe = '+';
	if (ft_quellebase(bt) && ft_quellebase(bf))
		return (ft_convert(ft_number(nbr, bf), ft_quellebase(bt), bt));
	else
		return (0);
}
