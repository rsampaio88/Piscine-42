/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:38:46 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/13 10:47:01 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 32 || *str > 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int 	main()
{
	char	*str1;
	int	resultado;

	str1 = "agf\n8i";
	resultado = ft_str_is_printable(str1);
	printf("%d", resultado);
	return (0);
}
*/		
