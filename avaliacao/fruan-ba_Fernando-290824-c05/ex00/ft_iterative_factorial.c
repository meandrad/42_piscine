/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:53:39 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/29 16:07:42 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

#include <stdio.h>
int	main(void)
{
	int	result;
	int	number;

	number = 3;
	result = ft_iterative_factorial(number);
	printf("O resultado fatorial do número %i é: %i ", number, result);
	return (0);
}
//Caro avaliador, não esquecer de colocar a <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	result;

	count = nb - 1;
	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (count > 1)
	{
		result *= count;
		count--;
	}
	return (result);
}
