/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:36:46 by joscosta          #+#    #+#             */
/*   Updated: 2024/09/05 11:35:55 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	str1[50] = "Hello, ";
	char	str2[] = "World!";

	printf("Concatenando '%s' e '%s' com n = 3: %s\n", str1, str2,
		ft_strncat(str1, str2, 3));
	printf("Concatenando '%s' e '%s' com n = 8: %s\n", str1, str2,
		ft_strncat(str1, str2, 8));
	return (0);
}
