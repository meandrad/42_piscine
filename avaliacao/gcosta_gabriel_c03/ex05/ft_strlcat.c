/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 08:56:56 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/09/03 17:13:42 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destl;
	unsigned int	srcl;
	unsigned int	i;

	destl = 0;
	srcl = 0;
	i = 0;
	while (src[srcl] != '\0')
	{
		srcl++;
	}
	while (src[destl] != '\0')
	{
		destl++;
	}
	if (size <= destl)
		return (size + srcl);
	while (src[i] && (destl + 1) < (size -1))
	{
		dest[destl + 1] = src[i];
		i++;
	}
	dest[destl + i] = '\0';
	return (destl + srcl);
}
int	main()
{
	char dest[20] = "bbb";
    	char src[] = "aaa";
    	unsigned int size = 0;

    	printf("Resultado: %u\n", ft_strlcat(dest, src, size));
    	printf("Destino: %s\n", dest);

    	char dest1[20] = "hello";
    	char src1[] = "world";
    	unsigned int size1 = 15;

    	printf("Resultado: %u\n", ft_strlcat(dest1, src1, size1));
    	printf("Destino: %s\n", dest1);

    	char dest2[10] = "short";
    	char src2[] = "longer";
    	unsigned int size2 = 8;

    	printf("Resultado: %u\n", ft_strlcat(dest2, src2, size2));
    	printf("Destino: %s\n", dest2);

    	return 0;
}
