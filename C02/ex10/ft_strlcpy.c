/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 23:28:12 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/19 23:28:15 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;	

	len_src = 0;
	i = 0;
	while (src[i] != '\0')
	{
		len_src++;
		i++;
	}
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

/*int	main(void)
{
	unsigned int 	size = 10;
	char		dest[10];
	char		*src = "Hello, World!";
	
	printf("String a copiar: %s", src);
	printf("\ntamanho necessario: %d", ft_strlcpy(dest, src, size));
}*/
