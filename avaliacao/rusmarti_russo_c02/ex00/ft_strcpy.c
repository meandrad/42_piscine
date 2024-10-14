/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:53:00 by rusmarti          #+#    #+#             */
/*   Updated: 2024/09/04 13:05:06 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	a[] = "abelha";
	char	b[] = "baixista";
	char	c[] = "calha";
	char	z[20] = "";
	char	y[20] = "";
	char	x[20] = "";	

	ft_strcpy(z, a);
	printf("%s tem que ser igual a %s \n", z, a);
	ft_strcpy(y, b);
       	printf("%s tem que ser igual a %s \n", y, b);
	ft_strcpy(x, c);
	printf("%s tem que ser igual a %s \n", x, c);
}
