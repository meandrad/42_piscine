/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:45:37 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 12:33:50 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (!str)
		return (res);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}
int     main(void)
{
        char    str[5] = " ";
        int     i;

        i = ft_str_is_numeric(str);
 	printf("%i", i);
        return(0);
}
