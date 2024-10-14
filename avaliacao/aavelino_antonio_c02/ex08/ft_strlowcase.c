/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:01:00 by aavelino          #+#    #+#             */
/*   Updated: 2024/09/03 13:10:30 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int main()
{
	char	ed1[] = "123";
	char	ed2[] = "42 SAO PAULO";
	char	ed3[] = "SaOPAuLo";

	printf("ed1: %s\n", ft_strlowcase(ed1));
	printf("ed2: %s\n", ft_strlowcase(ed2));
	printf("ed3: %s\n", ft_strlowcase(ed3));
	return (0);
}
