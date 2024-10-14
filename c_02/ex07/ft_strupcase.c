/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:14:25 by meandrad          #+#    #+#             */
/*   Updated: 2024/09/03 14:35:18 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += -32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
    if(argc != 2)
        return(0);
    ft_strupcase(argv[1]);
    printf("%s\n", argv[1]);
    return(0);
}*/
