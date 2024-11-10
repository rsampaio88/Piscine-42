/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:03:47 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/17 20:39:08 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb != 1)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
/*
 #include <stdio.h>
int	main()
{
	int	resu;

	resu = ft_iterative_factorial(4);
	printf("%d", resu);
	return (0);
}*/
