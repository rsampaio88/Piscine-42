/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:41:18 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/19 17:40:36 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writ(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	bubblesort(int argc, char *argv[])
{
	int		i;
	int		trocas;
	char	*temp;

	trocas = 1;
	while (trocas)
	{
		trocas = 0;
		i = 1;
		while (i < (argc - 1))
		{
			if ((argv[i][0] - argv[i + 1][0]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				trocas = 1;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	bubblesort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_writ(argv[i]);
		i++;
	}
	return (0);
}
