/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:16:16 by albezerr          #+#    #+#             */
/*   Updated: 2024/08/31 16:29:17 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((96 < *str && *str < 123) || (64 < *str && *str < 91)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int     main()
{
        char    *str;

	str = "Alexiafas";
	printf("%d\n", ft_str_is_alpha(str));
        return (0);
}
