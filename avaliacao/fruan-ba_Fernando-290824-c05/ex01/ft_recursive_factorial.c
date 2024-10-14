/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:19:57 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/29 16:13:36 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

#include <stdio.h> 
int	main(void)
{
	int	result;
	int	number;

	number = 5;
	result = ft_recursive_factorial(number);
	printf("O resultado do fatorial de %i é: %i\n", number, result);
	return (0);
}
//Caro avaliador, não se esquecer da <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
