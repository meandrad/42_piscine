/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:08:49 by aavelino          #+#    #+#             */
/*   Updated: 2024/09/03 13:06:44 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	ed1[] = "SaoPaulo";
	char	ed2[] = "sao paulo 42";
	char	ed3[] = "";

    printf("ed1: %d\n", ft_str_is_alpha(ed1)); 
    printf("ed2: %d\n", ft_str_is_alpha(ed2)); 
    printf("ed3: %d\n", ft_str_is_alpha(ed3)); 

    return 0;
}
