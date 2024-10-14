/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:36:50 by joscosta          #+#    #+#             */
/*   Updated: 2024/09/05 11:33:28 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "Teste";
	char	str2[] = "Teste";
	char	str3[] = "Teste1";

	printf("Comparando '%s' e '%s' com n = 5: %d\n", str1, str2,
		ft_strncmp(str1, str2, 5));
	printf("Comparando '%s' e '%s' com n = 6: %d\n", str1, str3,
		ft_strncmp(str1, str3, 6));
	printf("Comparando '%s' e '%s' com n = 3: %d\n", str3, str1,
		ft_strncmp(str3, str1, 3));
	return (0);
}
