/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:49:15 by acesar-m          #+#    #+#             */
/*   Updated: 2024/09/04 09:43:54 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (s1[i] - s2[i]);
	}
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char str1[] = "Augusto";
	char str2[] = "Augusto";
	int count = 5;

	printf("Primeira = %s\n", str1);
	printf("Segunda = %s\n", str2);
	printf("Função original = %d\n", strncmp(str1, str2, count));
	printf("Resultado da comparação = %d", ft_strncmp(str1, str2, count));
	
	return (0);
}