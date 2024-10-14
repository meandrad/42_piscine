/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:19:32 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:22:16 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	int result = ft_str_is_uppercase(text);
	if (result == 1) {
		printf("Você só colocou letras maiúsculas! Yay!");
	} else {
		printf("Você escreveu alguma porcaria com coisas esquisitas ou não maiúsculas! Não-yay!");
	}

}

