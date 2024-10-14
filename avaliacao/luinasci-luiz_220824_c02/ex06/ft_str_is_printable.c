/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:20:49 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:22:36 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		if (*str < 32 || *str > 126)
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
	int result = ft_str_is_printable(text);
	if (result == 1) {
		printf("Você só colocou coisas que dá pra imprimir! Yay!");
	} else {
		printf("Você escreveu alguma porcaria com coisas não imprimíveis! Não-yay!");
	}

}

