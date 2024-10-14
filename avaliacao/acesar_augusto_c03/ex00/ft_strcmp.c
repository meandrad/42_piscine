/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:19:21 by acesar-m          #+#    #+#             */
/*   Updated: 2024/09/04 09:41:44 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[50] = "Auguste";
	char s2[50] = "Augusto";

	printf("A strig um tem o valor de %s\n", s1);
	printf("A strig dois tem o valor de %s\n", s2);
	printf("Função original = %d\n", strcmp(s1,s2));
	printf("Resultado da comparação = %d\n", ft_strcmp(s1, s2));

	return (0);
}