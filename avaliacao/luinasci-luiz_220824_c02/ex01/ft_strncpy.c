/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:18:22 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:12:38 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*original_dest;

	original_dest = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original_dest);
}


int main()
{
	char dest[50];
	char init[50];
	int n = 0;

	printf("Escreve alguma coisa:");
	scanf("%49s", init);
	printf("Quanto você quer copiar, em número de caratcteres?:");
	scanf("%d", &n);

	ft_strncpy(dest, init, n);

	printf("Source: %s\n", init);
	printf("Destination: %s\n", dest);

	return 0;
}

