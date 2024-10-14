/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:39:51 by jude-pau          #+#    #+#             */
/*   Updated: 2024/09/05 09:33:26 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*pont;

	pont = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (pont);
}
int main(void)
{
    char src[] = "Hello, world!";
    char dest[50] = "oi";
    ft_strcpy(dest, src);

    printf("String de origem: %s\n", src);
    printf("String copiada: %s\n", dest);

    return 0;
}
