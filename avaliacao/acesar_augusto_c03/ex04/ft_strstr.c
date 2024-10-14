/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:00:35 by acesar-m          #+#    #+#             */
/*   Updated: 2024/09/04 09:51:45 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			a = str;
			b = to_find;
			while (*b != '\0' && *a == *b)
			{
				a++;
				b++;
			}
			if (*b == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[] = "Procurando string nesta frase";
	char string[] = "se";
	
	char *result = ft_strstr(dest, string);
	char *r = strstr(dest, string);

	
		printf("Procurando por: %s\n", string);
		printf("Retorno da função: %s\n", result);

		printf("Procurando por: %s\n", string);
		printf("Retorno da função: %s", r);

	return 0;
}