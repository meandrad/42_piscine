/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:22:39 by rusmarti          #+#    #+#             */
/*   Updated: 2024/09/04 13:08:25 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	a[20] = "abacate";
	char	b[20] = "ab4cate";
	char	c[20] = "aba cate";
	char	d[20] = "";

	printf("%d should be 1 \n", ft_str_is_alpha(a));
	printf("%d should be 0 \n", ft_str_is_alpha(b));
	printf("%d should be 0 \n", ft_str_is_alpha(c));
	printf("%d should be 1 \n", ft_str_is_alpha(d));
}
