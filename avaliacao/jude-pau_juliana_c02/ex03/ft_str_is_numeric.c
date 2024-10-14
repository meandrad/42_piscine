/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:17:25 by jude-pau          #+#    #+#             */
/*   Updated: 2024/09/05 09:35:31 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    char str1[] = "1234567890";
    char str2[] = "";

    printf("str1 é numérico: %d\n", ft_str_is_numeric(str1));
    printf("str2 é numérico: %d\n", ft_str_is_numeric(str2));

    return 0;
}
