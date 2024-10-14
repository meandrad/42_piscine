/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 00:34:01 by saalves-          #+#    #+#             */
/*   Updated: 2024/09/05 08:58:56 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	if (i < nb)
	{
		dest[j + i] = '\0';
	}
	return (dest);
}

int	main(void)
{
	char	c[20] = "Samir";
	char	s[] = " saalves-";

	printf("%s", ft_strncat(c, s, 2));
	return (0);
}
