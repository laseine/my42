/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfseffa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:04 by rfseffa           #+#    #+#             */
/*   Updated: 2016/02/27 12:59:16 by rfseffa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendes;
	unsigned int	lensrc;
	unsigned int	lencat;
	unsigned int	i;

	lendes = 0;
	while (dest[lendes] != '\0')
		++lendes;
	lensrc = 0;
	while (src[lensrc] != '\0')
		++lensrc;
	if (size <= lendes)
		lencat = lensrc + size;
	else
		lencat = lensrc + lendes;
	i = 0;
	while (src[i] != '\0' && lendes + 1 < size)
	{
		dest[lendes] = src[i];
		lendes++;
		i++;
	}
	dest[lendes] = '\0';
	return (lencat);
}
