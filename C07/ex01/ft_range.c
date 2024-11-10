/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 23:45:59 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/19 23:55:56 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	x;

	i = max - min;
	if (i <= 0)
		return (NULL);
	dest = (int *) malloc(4 * i);
	if (dest == NULL)
		return (NULL);
	else
	{
		x = 0;
		while (min < max)
		{
			dest[x] = min;
			min++;
			x++;
		}
		return (dest);
	}
}
/*
int	main()
{
	int	i;
	int	min;
	int	max;
	int	*ar;

	i = 0;
	min = 1;
	max = 5;
	ar = ft_range(min, max);
	while (ar[i] != '\0')
	{
		printf("%d\n", ar[i]);
		i++;
	}
	return (0);
}
*/
