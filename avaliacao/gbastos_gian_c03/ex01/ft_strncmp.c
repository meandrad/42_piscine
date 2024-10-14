/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:12:45 by gbastos-          #+#    #+#             */
/*   Updated: 2024/09/05 15:20:46 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	yag;

	yag = 0;
	while (*s1 != '\0' && *s2 != '\0' && yag < n - 1)
	{
		s1++;
		s2++;
		yag++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>

int	main(void)
{
	char s1[] = "Melissinha";
	char s2[] = "Melassinha";

	printf("%i\n", ft_strncmp(s1, s2, 4));
	return (0);
}