/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:07:19 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/18 14:57:01 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_primofind(int nb)
{
	int	a;

	a = 2;
	while (a != nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (2);
	while (ft_primofind(nb + i) != 1)
	{
		i++;
	}
	return (nb + i);
}
/*
int	main()
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 5;
	b = 9;
	c = ft_find_next_prime(a);
//	d = ft_find_next_prime(b);
	printf("%d", c);
//	printf("%d", d);
	return (0);
}*/
