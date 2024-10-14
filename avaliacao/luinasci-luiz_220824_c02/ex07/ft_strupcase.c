/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:40:32 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:22:51 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}

int main()
{
	char text[100];

	printf("Digite alguma palavra, sem espaços, use maiúsculas e minúsculas");
	scanf("%99s", text);
	ft_strupcase(text);
	printf("Em maiúsculo fica: %s", text);
	return 0;
}

