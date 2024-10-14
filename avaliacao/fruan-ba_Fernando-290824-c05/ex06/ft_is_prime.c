/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 08:33:06 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/29 16:41:44 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

#include <stdio.h>
int	main(void)
{
	int	number;
	int	result;

	number = 13;
	result = ft_is_prime(number);
	printf("Número bonito para teste: %i\n", number);
	printf("O número é primo? %i\n", result);
	printf("1 -> Sim E 0 -> Não.\n");
	return (0);
}

int	ft_is_prime(int nb)
{
	int	attempt;

	attempt = 2;
	if (nb < 2)
		return (0);
	while (attempt * attempt <= nb)
	{
		if (nb % attempt == 0)
			return (0);
		attempt++;
	}
	return (1);
}
