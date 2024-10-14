/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:36:34 by joscosta          #+#    #+#             */
/*   Updated: 2024/09/05 11:32:13 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "Teste";
	char	str2[] = "Teste";
	char	str3[] = "Teste1";

	printf("Comparando '%s' e '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparando '%s' e '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparando '%s' e '%s': %d\n", str3, str1, ft_strcmp(str3, str1));
	return (0);
}
