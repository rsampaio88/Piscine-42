/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:37:51 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/10 19:23:32 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numeros;

	numeros = '0';
	while (numeros <= '9')
	{
		write(1, &numeros, 1);
		numeros++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
