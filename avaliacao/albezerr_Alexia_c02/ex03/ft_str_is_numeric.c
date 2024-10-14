/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:11:25 by albezerr          #+#    #+#             */
/*   Updated: 2024/08/31 16:30:49 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(47 < *str && *str < 58))
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

        str = "";
        printf("%d\n", ft_str_is_numeric(str));
        return (0);
}
