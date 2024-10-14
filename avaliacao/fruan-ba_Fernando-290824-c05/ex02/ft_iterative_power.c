/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:48:19 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/29 16:20:05 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

#include <stdio.h> 
int	main(void)
{
	int	number;
	int	power;
	int	result;

	number = 0;
	power = 0;
	result = ft_iterative_power(number, power);
	printf("O resultado do número %i elevado a %i é: %i\n", number, power, result);
	return (0);
}
//Caro avaliador, não esquecer da <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	result;

	count = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (count < power)
	{
		result *= nb;
		count++;
	}
	return (result);
}
