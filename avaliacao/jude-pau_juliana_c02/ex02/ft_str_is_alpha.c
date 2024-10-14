/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:57:15 by jude-pau          #+#    #+#             */
/*   Updated: 2024/09/05 09:34:53 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    char str1[] = "HelloWorld";
    char str2[] = "";

    printf("str1 é alfabético: %d\n", ft_str_is_alpha(str1));
    printf("str2 é alfabético: %d\n", ft_str_is_alpha(str2));

    return 0;
}
