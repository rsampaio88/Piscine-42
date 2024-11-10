/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:15:39 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/18 14:06:29 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 1)
		return (0);
	while (a != nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
/*
int	main()
{
	int	nb;
	int	nb1;
	int	nb2;
	int	resu;
	int	resu1;
	int	resu2;

	nb = 2;
	nb1 = 7;
	nb2 = 9;
	resu = ft_is_prime(nb);
	resu1 = ft_is_prime(nb1);
	resu2 = ft_is_prime(nb2);
	printf("%d", resu);
	printf("%d", resu1);
	printf("%d", resu2);
	return(0);
}*/
