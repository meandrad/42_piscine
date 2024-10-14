/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:35:37 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/30 15:30:52 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#include <stdio.h> 
int	main(void)
{
	printf("%d", ft_str_is_alpha("aBe cR"));
	return (0);
}