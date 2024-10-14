/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:05:54 by aavelino          #+#    #+#             */
/*   Updated: 2024/09/03 13:07:21 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	ed1[] = "sao paulo -42";
	char	ed2[] = "0123456789";
	char	ed3[] = "12'\0'*4rt";

	printf("ed1: %d\n", ft_str_is_numeric(ed1));
	printf("ed2: %d\n", ft_str_is_numeric(ed2));
	printf("ed3: %d\n", ft_str_is_numeric(ed3));
	return (0);
}
