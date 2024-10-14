/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:26:48 by jude-pau          #+#    #+#             */
/*   Updated: 2024/09/05 09:36:38 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "HELLOworld";
    char str3[] = "WORLD";
    char str4[] = "";

    printf("str1 é maiúsculo: %d\n", ft_str_is_uppercase(str1));
    printf("str2 é maiúsculo: %d\n", ft_str_is_uppercase(str2));
    printf("str3 é maiúsculo: %d\n", ft_str_is_uppercase(str3));
    printf("str4 é maiúsculo: %d\n", ft_str_is_uppercase(str4));

    return 0;
}
