/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:38:30 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:20:41 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}


int main()
{
	char text[99];
	printf("Escreve qualquer coisa, literalmente,com caracteres especiais e números se quiser:");
	scanf("%s[99]", text);
	int result = ft_str_is_alpha(text);
	if (result == 1) {
		printf("Você só colocou letras! Yay!");
	} else {
		printf("Você escreveu alguma porcaria com coisas esquisitas! Não-yay!");
	}

}

