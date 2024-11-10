/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:05:50 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/22 17:17:40 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resu;

	resu = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (nb != 0 && power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			resu = resu * nb;
			power--;
		}
		return (resu);
	}
}
/*
#include <stdio.h>

int	main()
{
	int	fim;

	fim = ft_iterative_power(2, -3);
	printf("%d", fim);
	return (0);
}*/
