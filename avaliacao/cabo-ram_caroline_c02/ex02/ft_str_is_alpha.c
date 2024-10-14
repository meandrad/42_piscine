/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:23:15 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/09/03 10:06:49 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 'a' && str[i] <= 'z'))
			&& (!(str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
    int j;

    if(argc != 2)
        return(0);
    
    j = ft_str_is_alpha(argv[1]);
    printf("%d", j);
    return(0);
}
