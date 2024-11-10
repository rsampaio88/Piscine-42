/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:17:41 by rsampaio          #+#    #+#             */
/*   Updated: 2024/09/18 10:13:39 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		a = 0;
		while (str[i + a] == to_find[a])
		{
			if (to_find[a + 1] == '\0')
				return (&str[i]);
			a++;
		}
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strstr(argv[1], argv[2]));
}
*/
/*
int	main()
{
	char	str[] = "autorizada";
	char	str1[] = "riza";
	char *resu;

	resu = ft_strstr(str, str1);
	printf("%s", resu);
	return (0);
}*/
