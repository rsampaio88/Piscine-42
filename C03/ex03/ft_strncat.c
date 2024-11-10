/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:23:30 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/16 16:39:06 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	lendest;
	unsigned int	lensrc;

	lendest = 0;
	lensrc = 0;
	while (dest[lendest] != '\0')
	{
		lendest++;
	}
	while (src[lensrc] != '\0' && lensrc < nb)
	{
		dest[lendest + lensrc] = src[lensrc];
		lensrc++;
	}
	dest[lendest + lensrc] = '\0';
	return (dest);
}

/*int	main()
{
	char	dest[] = "ola";
	char	src[] = "ritaaaa";
	int	nb_char = 4;

	ft_strncat(dest, src, nb_char);
	printf("%s",dest);
	return (0);
}*/
