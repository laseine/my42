/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2016/02/27 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		is_alphabetic(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	if ('a' <= str[0] && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	i = 1;
	while (str[i] != '\0')
	{
		if (is_alphabetic(str[i]))
		{
			if (is_alphanumeric(str[i - 1]))
			{
				if ('A' <= str[i] && str[i] <= 'Z')
					str[i] = str[i] - 'A' + 'a';
			}
			else if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
