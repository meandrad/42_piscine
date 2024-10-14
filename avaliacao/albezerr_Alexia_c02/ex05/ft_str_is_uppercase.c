/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:16:46 by albezerr          #+#    #+#             */
/*   Updated: 2024/08/31 16:32:43 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str > 64 && *str < 91))
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

	str = "";
	printf("%d", ft_str_is_uppercase(str));
}
