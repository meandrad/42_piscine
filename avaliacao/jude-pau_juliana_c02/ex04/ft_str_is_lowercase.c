/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:37:22 by jude-pau          #+#    #+#             */
/*   Updated: 2024/09/05 09:36:01 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    char str1[] = "abcdef";
    char str2[] = "";

    printf("str1 é minúsculo: %d\n", ft_str_is_lowercase(str1));
    printf("str2 é minúsculo: %d\n", ft_str_is_lowercase(str2)); 

    return 0;
}
