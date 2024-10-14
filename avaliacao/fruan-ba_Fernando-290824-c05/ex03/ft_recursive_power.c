/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:26:55 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/29 16:25:13 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

#include <stdio.h>
int	main(void)
{
	int	result;
	int	number;
	int	power;

	number = 2;
	power = -20;
	result = ft_recursive_power(number, power);
	printf("Número %i Potência %i: %i\n", number, power, result);
	return (0);
}
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
