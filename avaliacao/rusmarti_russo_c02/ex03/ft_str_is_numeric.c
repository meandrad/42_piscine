/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:58:13 by rusmarti          #+#    #+#             */
/*   Updated: 2024/09/04 13:09:25 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	a[20] = "123";
	char	b[20] = "12a";
	char	c[20] = "ab1";
	char	d[20] = "";

	printf("%d é pra ser 1\n", ft_str_is_numeric(a));
	printf("%d é pra ser 0\n", ft_str_is_numeric(b));
	printf("%d é pra ser 0\n", ft_str_is_numeric(c));
	printf("%d é pra ser 1", ft_str_is_numeric(d));
}
