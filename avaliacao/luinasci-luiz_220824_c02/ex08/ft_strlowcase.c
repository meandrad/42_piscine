/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:21:38 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:23:05 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}

int main()
{
	char text[100];

	printf("Digite alguma palavra, sem espaços, use maiúsculas e minúsculas:");
	scanf("%99s", text);
	ft_strlowcase(text);
	printf("Em minúsculo fica: %s", text);
	return 0;
}

