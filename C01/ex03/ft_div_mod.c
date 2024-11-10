/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:20:29 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/15 17:07:55 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int	a = 10;
	int	b = 4;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);

	printf("Divisor : %d\n", a);
	printf("Dividendo : %d\n", b);
	printf("Quociente : %d\n", div);
	printf("Mod : %d\n", mod);
	return (0);
}
*/
