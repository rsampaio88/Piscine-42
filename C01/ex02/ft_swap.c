/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:46:18 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/15 17:06:57 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	valor;

	valor = *a;
	*a = *b;
	*b = valor;
}

/*
int main()
{
	int 	x = -4;
	int	y = 0;
	printf("Before x = %d\n",x);
	printf("Before y = %d\n",y);
	ft_swap(&x, &y);
	printf("After x = %d\n",x);
	printf("Afer y = %d\n", y);
	return(0);
}	
*/
