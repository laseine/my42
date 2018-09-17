/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2016/02/27 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '0')
		len++;
	return (len);
}

int		ft_puissance(int a, int b)
{
	int p;
	int i;

	p = 1;
	i = 0;
	while (i < b)
	{
		p = p * a;
		i++;
	}
	return (p);
}

int		ft_base_ok(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_char_in_base(char c, char *strbase)
{
	int r;
	int exists;

	exists = -1;
	r = 0;
	while (strbase[r] != '\0')
	{
		if (strbase[r] == c)
			exists = r;
		r++;
	}
	return (exists);
}

int		ft_strsign(char *str)
{
	int i;
	int sign;

	sign = 1;
	i = 0;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	if (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
	}
	return (sign);
}

char	*is_str_clean(char *simplel, char *str, char *strbase)
{
	while (*str != '\0')
	{
		if (*str != ' ' && *str != '-' && *str != '+')
		{
			*simplel = *str;
			simplel++;
		}
		str++;
	}
	while (*str != '\0')
	{
		if (is_char_in_base(*str, strbase) != -1)
			*simplel = *str;
		str++;
		simplel++;
	}
	*simplel = '\0';
	return (simplel);
}

int		ft_atoi_base(char *str, char *base)
{
	int		b;
	int		nbr;
	int		signe;
	char	*sl;
	int		i;

	sl = NULL;
	signe = 1;
	b = 0;
	while (base[b] != '\0')
		b++;
	if (b < 2 || ft_base_ok(base) == 0)
		return (0);
	signe = ft_strsign(str);
	sl = is_str_clean(sl, str, base);
	i = ft_strlen(sl) - 1;
	nbr = 0;
	while (i >= 0)
	{
		nbr += ft_puissance(b, i) * is_char_in_base(sl[i], base);
		i++;
	}
	return (nbr * (signe));
}
