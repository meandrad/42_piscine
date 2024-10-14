/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:06:36 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:21:25 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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
	int result = ft_str_is_numeric(text);
	if (result == 1) {
		printf("Você só colocou números! Yay!");
	} else {
		printf("Você escreveu uma mistura de coisas esquisitas,quando devia ter escrito só números! Não-yay!");
	}

}

