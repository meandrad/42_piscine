/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:10:09 by aavelino          #+#    #+#             */
/*   Updated: 2024/09/03 13:10:00 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int main()
{
	char	ed1[] = "123";
	char	ed2[] = "saopaulo";
	char	ed3[] = "SaOPAuLo";

	printf("ed1: %s\n", ft_strupcase(ed1));
	printf("ed2: %s\n", ft_strupcase(ed2));
	printf("ed3: %s\n", ft_strupcase(ed3));
	return (0);
}
