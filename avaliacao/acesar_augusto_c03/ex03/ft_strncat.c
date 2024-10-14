/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:20:08 by acesar-m          #+#    #+#             */
/*   Updated: 2024/09/04 09:49:21 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[50] = "Augusto ";
	char surname[] = "Cesar";
	int n = 2;

	printf("Nome completo: %s \n", ft_strncat(name, surname, n));

	char name2[50] = "Augusto ";
	printf("Função original: %s", strncat(name2, surname, n));

	return (0);
}