/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:24:52 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/24 20:19:36 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_total(char **strs, char *sep, int size)
{
	int	total;
	int	lsep;

	total = 0;
	lsep = ft_len(sep);
	while (size > 0)
	{
		total = total + ft_len(strs[size - 1]);
		if (size != 1)
			total = total + lsep;
		size--;
	}
	return (total);
}

void	ft_strcopy(char *dest, char *strs, char *sep, int posi)
{
	int	len;
	int	i;
	int	a;

	i = 0;
	len = ft_len(dest);
	while (strs[i] != '\0')
	{
		dest[len + i] = strs[i];
		i++;
	}
	dest[len + i + 1] = '\0';
	len = len + i;
	a = 0;
	if (posi == 1)
	{
		while (sep[a] != '\0' )
		{
			dest[len + a] = sep[a];
			a++;
		}
		len = len + a;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*dest;

	i = 0;
	total = ft_total(strs, sep, size);
	dest = (char *) malloc(total + 1);
	*dest = '\0';
	if (!dest)
		return (NULL);
	while (i < size)
	{
		if (i == size - 1)
			ft_strcopy(dest, strs[i], sep, 0);
		else
			ft_strcopy(dest, strs[i], sep, 1);
		i++;
	}
	dest[total] = '\0';
	return (dest);
}

/*int	main()
{
	char	*strs[] = {"HEllo", "word", "hi"};
	char	*sep = ",";
	int	size = 3;

	printf("%s", ft_strjoin(size, strs, sep));
	return (0);
}
*/
