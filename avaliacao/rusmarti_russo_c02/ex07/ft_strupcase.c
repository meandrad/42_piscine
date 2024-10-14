/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:45:52 by rusmarti          #+#    #+#             */
/*   Updated: 2024/09/04 13:13:22 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	a[] = "AbaCATE";
	char	b[] = "BAnana";
	char	c[] = "CAJu";

	printf("gritar %s é tipo: ", a);
	printf("%s\n", ft_strupcase(a));
	printf("gritar %s é tipo: ", b);
	printf("%s\n", ft_strupcase(b));
	printf("mas %s gritado é triste, é meio: ", c);
	printf("%s", ft_strupcase(c));
}
