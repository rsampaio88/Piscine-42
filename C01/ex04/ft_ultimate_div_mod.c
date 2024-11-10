/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:07:39 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/15 17:08:42 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	valor;

	valor = *a;
	*a = valor / *b;
	*b = valor % *b;
}
/*
int main()
{
	int	a = 10;
	int	b = 4;
	
	printf("Before a = %d, b= %d\n",a ,b);
	ft_ultimate_div_mod(&a, &b);
	printf("After a = %d, b= %d\n", a,b);
	return (0);
}
*/
