/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:18:27 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/22 17:23:51 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0 && nb > 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	int	resu;

	resu = ft_recursive_power(-2, 3);
	printf("%d", resu);
	return (0);
}*/
