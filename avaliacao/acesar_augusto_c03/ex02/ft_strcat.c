/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:46:00 by acesar-m          #+#    #+#             */
/*   Updated: 2024/09/04 09:44:21 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
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

	printf("Nome: %s\n", name);
	printf("Sobrenome: %s\n", surname);
	printf("Nome completo: %s\n", ft_strcat(name, surname));

	char name2[50] = "Augusto ";
	printf("Função original: %s\n", strcat(name2, surname));
}