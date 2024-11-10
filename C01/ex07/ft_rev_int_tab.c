/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:38:19 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/15 17:39:18 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	posicao;
	int	fim;
	int	valor;

	posicao = 0;
	fim = size -1;
	while (posicao <= fim)
	{
		valor = tab[posicao];
		tab[posicao] = tab[fim];
		tab[fim] = valor;
		posicao++;
		fim--;
	}
}
/*
int main()
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7, 9};
	int	size = sizeof(array) / sizeof(array[0]);
	int	i = 0;
	int	j = 0;

	printf("Before : \n");
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	ft_rev_int_tab(array, size);
	printf("\nAfter : \n");
	while (j < size)
	{
		printf("%d", array[j]);
		j++;
	}
	return (0);
}
*/
