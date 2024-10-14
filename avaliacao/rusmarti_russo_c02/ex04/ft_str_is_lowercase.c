/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:45:10 by rusmarti          #+#    #+#             */
/*   Updated: 2024/09/04 13:10:08 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	a[20] =	"card";
	char	b[20] = "moNey";
	char	c[20] = "crediT";
	char	d[20] = "";

	printf("%d deveria ser 1\n", ft_str_is_lowercase(a));
	printf("%d deveria ser 0\n", ft_str_is_lowercase(b));
	printf("%d deveria ser 0\n", ft_str_is_lowercase(c));
	printf("%d deveria ser 1", ft_str_is_lowercase(d));
}
