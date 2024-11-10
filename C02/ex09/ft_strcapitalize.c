/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:50:07 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/19 13:15:08 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_low(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_low(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] < 'A'
			|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')
		{
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	argc = argc;
	printf("%s", ft_strcapitalize(argv[1]));
	return (0);
}*/
