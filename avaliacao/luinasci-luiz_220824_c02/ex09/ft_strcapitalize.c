/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:38:35 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/21 20:23:21 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c = c - ('a' - 'A'));
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		new_word;

	ptr = str;
	new_word = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (new_word)
			{
				*str = to_upper(*str);
				new_word = 0;
			}
		}
		else
		{
			new_word = 1;
		}
		str++;
	}
	return (str);
}

int main()
{
	char text[100];

	printf("Digite qualquer coisa: ");

	if (fgets(text, sizeof(text), stdin) != NULL)
	{
		char *newline = text;
		while (*newline && *newline != '\n')
		{
			newline++;
		}
		if (*newline == '\n')
		{
			*newline = '\0';
		}
		ft_strcapitalize(text);
		printf("Capitalizado: %s", text);
		return 0;
	}
	else
	{
		printf("Deu chabú. Tenta de novo.");
	}
	return 0;
}

