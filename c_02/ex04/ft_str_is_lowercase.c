/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:07:25 by meandrad          #+#    #+#             */
/*   Updated: 2024/08/31 19:53:08 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
    j = ft_str_is_lowercase(argv[1]);
    printf("%d", j);

}*/
