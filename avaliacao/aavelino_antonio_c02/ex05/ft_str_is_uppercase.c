/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:54:41 by aavelino          #+#    #+#             */
/*   Updated: 2024/09/03 13:08:45 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65) && (str[i] <= 90)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	ed1[] = "1255678";
	char	ed2[] = "SAOPAULO";
	char	ed3[] = "saopaulo";

	printf("ed1: %d\n", ft_str_is_uppercase(ed1));
	printf("ed2: %d\n", ft_str_is_uppercase(ed2));
	printf("ed3: %d\n", ft_str_is_uppercase(ed3));
	return (0);
}
