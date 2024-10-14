/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_upperccase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:00:23 by rusmarti          #+#    #+#             */
/*   Updated: 2024/09/04 13:10:51 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char	a[] = "ABACATE";
	char	b[] = "BANaNA";
	char	c[] = "cacau";
	char	d[] = "";

	printf("%d should be 1\n", ft_str_is_uppercase(a));
	printf("%d should be 0\n", ft_str_is_uppercase(b));
	printf("%d should be 0\n", ft_str_is_uppercase(c));
	printf("%d should be 1\n", ft_str_is_uppercase(d));
}

