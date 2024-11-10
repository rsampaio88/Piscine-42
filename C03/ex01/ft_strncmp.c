/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:23:56 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/16 13:56:08 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	str1[] = "hello";
	char	str2[] = "hellp";// mesmo tamanho difere
	char	str3[] = "with";
	char	str4[] = "withdraw";//difere tamanho igual
	char	str5[] = "tarte";
	char	str6[] = "tate";

	int	a = 5;
	int	b = 5;
	int	c = 4;
*/
