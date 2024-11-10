/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:31:42 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/19 20:31:45 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		i++;
		len++;
	}
	i = 0;
	dest = (char *) malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	else
	{
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char *src = "Testtte!";	
	
	printf("%s", ft_strdup(src));
	return (0);
}*/
