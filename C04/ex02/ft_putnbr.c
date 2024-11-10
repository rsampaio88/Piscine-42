/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:04:52 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/18 19:19:33 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *str, int i)
{
	while (i != 0)
	{
		write(1, &str[i - 1], 1);
		i--;
	}
}

void	ft_positivo(int nb)
{
	char	num[11];
	int		i;

	i = 0;
	while (nb > 0)
	{
		num[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	ft_write(num, i);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb > 0)
		ft_positivo(nb);
}
