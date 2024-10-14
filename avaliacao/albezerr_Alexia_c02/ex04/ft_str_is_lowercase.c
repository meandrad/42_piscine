/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:28:12 by albezerr          #+#    #+#             */
/*   Updated: 2024/08/31 16:31:48 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str > 96 && *str < 123))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main()
{
	char	*str;

	str = "aa";
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
