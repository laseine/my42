/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:29:17 by rfseffa           #+#    #+#             */
/*   Updated: 2018/09/02 11:36:07 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		compteur;
	int		len;
	char	tmp;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	if (str)
	{
		compteur = 0;
		while (compteur <= len / 2)
		{
			tmp = str[compteur];
			str[compteur] = str[len - compteur];
			str[len - compteur] = tmp;
			compteur++;
		}
	}
	return (str);
}
