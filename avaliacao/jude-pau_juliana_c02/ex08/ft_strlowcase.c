/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:44:32 by jude-pau          #+#    #+#             */
/*   Updated: 2024/09/05 09:39:28 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "AAAAAAAAAAAAAAAAA";

	printf("Original: %s\n", str);
	printf("Modified: %s\n", ft_strupcase(str));

	return (0);
}
