/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:47:24 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/16 12:14:40 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	str1[] = "heloo";
	char	str2[] = "hello";
	char	str3[] = "computador";
	char	str4[] = "compu";
	char	str5[] = "tarte";
	char	str6[] = "tarte";
	char	str7[] = "fich";
	char	str8[] = "ficheiro";
	int	resu1;
	int	resu2;
	int	resu3;
	int	resu4;

	resu1 = ft_strcmp(str1, str2);
	resu2 = ft_strcmp(str3, str4);
	resu3 = ft_strcmp(str5, str6);
	resu4 = ft_strcmp(str7, str8);
	printf("%d\n", resu1);
	printf("%d\n", resu2);
	printf("%d\n", resu3);
	printf("%d\n", resu4);
	return (0);
}
*/	
