/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:00:19 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/23 19:46:06 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	num;

	sign = 1;
	i = 0;
	num = 0;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int	ft_verify(char *base)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (base[i] != '\0')
	{
		a = i + 1;
		while (base[a] != '\0')
		{
			if (base[i] == base[a])
				return (0);
			a++;
		}
		i++;
	}
	return (1);
}

int	ft_len(char *base)
{
	int	i;

	i = 0;
	if (base[i] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

void	ft_premium(int nbr, char *base, int len)
{
	long	nlong;

	nlong = nbr;
	if (nbr < 0)
	{
		nlong = nlong * (-1);
		write(1, "-", 1);
	}
	if (nlong >= len)
		ft_premium(nlong / len, base, len);
	write(1, &base[nlong % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nlong;

	nlong = nbr;
	len = ft_len(base);
	if (len < 2)
		return ;
	if (ft_verify(base) == 0)
		return ;
	if (len == 0)
		return ;
	ft_premium(nbr, base, len);
}
/*
int	main(int argc, char *argv[])
{
	ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
	return (0);
}*/
