/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:04:04 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/17 17:26:03 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a1, int a2)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (a1 / 10) + '0';
	b = (a1 % 10) + '0';
	c = (a2 / 10) + '0';
	d = (a2 % 10) + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a1 == 98 && a2 == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a1;
	int	a2;

	a1 = 0;
	while (a1 <= 98)
	{
		a2 = a1 + 1;
		while (a2 <= 99)
		{
			ft_print(a1, a2);
			a2++;
		}
		a1++;
	}
}
/*
int	main()
{
	ft_print_comb2();
	return (0);
}
*/
