/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:37:33 by aavelino          #+#    #+#             */
/*   Updated: 2024/09/03 13:08:01 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97) && (str[i] <= 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	char	ed1[] = "1255678";
	char	ed2[] = "saopaulo";
	char	ed3[] = "SAOPAULO";

	printf("ed1: %d\n", ft_str_is_lowercase(ed1));
	printf("ed2: %d\n", ft_str_is_lowercase(ed2));
	printf("ed3: %d\n", ft_str_is_lowercase(ed3));
	return (0);
}
