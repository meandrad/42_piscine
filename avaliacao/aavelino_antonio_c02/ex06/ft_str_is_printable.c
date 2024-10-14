/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:44:46 by aavelino          #+#    #+#             */
/*   Updated: 2024/09/03 13:09:35 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	char	ed1[] = "aaaaaè";
	char	ed2[] = "SAOPAULO12345";
	char	ed3[] = "sao paulo";

	printf("ed1: %d\n", ft_str_is_printable(ed1));
	printf("ed2: %d\n", ft_str_is_printable(ed2));
	printf("ed3: %d\n", ft_str_is_printable(ed3));
	return (0);
}