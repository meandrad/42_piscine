/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:36:52 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:12:04 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}


int main()
{
	char dest[50];
	char init[50];

	printf("Escreve alguma coisa:");
	scanf("%49s", init);

	ft_strcpy(dest, init);

	printf("Source: %s\n", init);
	printf("Destination: %s\n", dest);

	return 0;
}

