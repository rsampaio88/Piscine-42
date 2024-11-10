/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:20:05 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/18 12:16:09 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_src_len(char *src)
{
	int	i;
	int	len;	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

int	ft_dest_len(char *dest)
{
	int	i;
	int	len;	i = 0;
	len = 0;
	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		len_src;
	unsigned int		len_dest;	
	
	len_src = ft_src_len(src);
	len_dest = ft_dest_len(dest);
	i = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] != '\0' && (len_dest + i) < (size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*int	main(void)
{
	char		dest[5] = "OLad";
	char 		*src = "aad";
	unsigned int	size = 5;
	
	printf("%d", ft_strlcat(dest, src, size));
	return (0);
}*/
