/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:14:56 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:21:51 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	int result = ft_str_is_lowercase(text);
	if (result == 1) {
		printf("Você só colocou letras minúsculas! Yay!");
	} else {
		printf("Você escreveu alguma porcaria com coisas esquisitas ou não minúsculas! Não-yay!");
	}

}

