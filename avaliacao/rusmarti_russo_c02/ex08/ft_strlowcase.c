/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:35:11 by rusmarti          #+#    #+#             */
/*   Updated: 2024/09/04 13:14:38 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	a[] = "MErdA";
	char	b[] = "AZUleia";
	char	c[] = "BuNDa";

	printf("Cara, ás vezes você fala %s muito alto.", a);
	printf(" Tenta: %s\n", ft_strlowcase(a));
	printf("Okay, e sobre você gritando %s na biblioteca?", b);
	printf(" %s seria melhor. Não dói o ouvido.\n", ft_strlowcase(b));
	printf("Você gritou %s no cinema outro dia.", c);
	printf(" Ninguém quer ouvir que você pegou na %s de alguém", ft_strlowcase(c));
}
