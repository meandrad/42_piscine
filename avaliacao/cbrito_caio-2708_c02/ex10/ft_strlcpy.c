/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:34:34 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/08/27 16:52:31 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[cont] != '\0')
		cont++;
	return (cont);
}
int	main(int argc, char **argv)
{
	char	strg[8];
	int		n;

	if (argc != 2)
		return (0);
	
	n = ft_strlcpy(strg, argv[1], 13);
	printf("%s\n%d\n", strg, n);
	return (0);
}
