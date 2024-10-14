/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:13:22 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/29 16:32:21 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

#include <stdio.h>
int	main(void)
{
	int	index;
	int	result;

	index = -1;
	result = ft_fibonacci(index);
	printf("O resultado da fibonacci no index pedido é: %i\n", result);
	return (0);
}
//Caro avaliador, não esquecer da <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
