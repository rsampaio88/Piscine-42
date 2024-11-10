/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:47:18 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/15 17:42:21 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	posicao;
	int	valor;

	posicao = 0;
	while (posicao < size -1)
	{
		if (tab[posicao] > tab[posicao +1])
		{
			valor = tab[posicao];
			tab[posicao] = tab[posicao +1];
			tab[posicao +1] = valor;
			posicao = 0;
		}
		else
			posicao++;
	}
}
/*
int main()
{
	int	arr[] = {5,7,90,4,0,-2};
	int	size = 6;
	int	i = 0;

	ft_sort_int_tab(arr, size);

	while (i < size)
	{
		printf("%d,", arr[i]);
		i++;
	}
	return (0);
}
*/
