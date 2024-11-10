/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:49:22 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/12 15:00:22 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char	*src;
	char	dest[50];

	src = "goodwork";
	ft_strcpy (dest, src);
	printf("Antes : %s\n", src);
	printf("Depois : %s\n", dest);
	return (0);
}
*/
