/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:57:49 by jude-pau          #+#    #+#             */
/*   Updated: 2024/09/05 09:37:47 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "\tHello\n";
    char str3[] = "12345";
    char str4[] = "é";

    printf("str1 é imprimível: %d\n", ft_str_is_printable(str1));
    printf("str2 é imprimível: %d\n", ft_str_is_printable(str2));
    printf("str3 é imprimível: %d\n", ft_str_is_printable(str3));
    printf("str4 é imprimível: %d\n", ft_str_is_printable(str4)); 

    return 0;
}
