/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:01:22 by rusmarti          #+#    #+#             */
/*   Updated: 2024/09/04 13:06:58 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	a[] = "chocolate";
	char	b[20] = "";
	unsigned int c;

	c = 1;
	ft_strncpy(b, a, c);
	printf("%s = %s", a, b);
	return (0);
}
