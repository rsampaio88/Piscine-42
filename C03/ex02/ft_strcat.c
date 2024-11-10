/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:08:05 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/16 16:17:04 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	lensr;

	len = 0;
	lensr = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[lensr] != '\0')
	{
		dest[len + lensr] = src[lensr];
		lensr++;
	}
	dest[len + lensr] = '\0';
	return (dest);
}
/*
int	main()
{
	char	dest[] = "ola";
	char	src[] = "rita";
	
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}
*/	
