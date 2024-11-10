/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 00:30:27 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/20 01:28:30 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tamanho;
	int	i;

	tamanho = max - min;
	i = 0;
	if (tamanho <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(tamanho * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (tamanho);
}
/*
#include <stdio.h>

int	main()
{
	int	**range;
	
	printf("%d", ft_ultimate_range(range, 7, 11));
	return (0);
}*/
