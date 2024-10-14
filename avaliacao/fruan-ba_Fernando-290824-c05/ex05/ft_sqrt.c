/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 08:23:34 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/29 16:37:10 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);


#include <stdio.h>
int	main(void)
{
	int	number;
	int	result;

	number = 16;
	result = ft_sqrt(number);
	printf("O resultado da raíz de %i é: %i\n", number, result);
	return (0);
}
//Caro avaliador, não esquecer de colocar a <stdio.h>

int	ft_sqrt(int nb)
{
	int	attempt;

	attempt = 1;
	while (attempt * attempt <= nb)
	{
		if ((attempt * attempt) == nb)
			return (attempt);
		attempt++;
	}
	return (0);
}
