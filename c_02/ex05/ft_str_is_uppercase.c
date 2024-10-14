/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:09:48 by meandrad          #+#    #+#             */
/*   Updated: 2024/08/28 19:11:02 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>
int main (int argc, char **argv)
{
    int j;

    if(argc != 2)
        return(0);
    j = ft_str_is_uppercase(argv[1]);
    printf("%d", j);

}*/
