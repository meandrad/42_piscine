/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:58:19 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/01 05:38:07 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}

#include <stdio.h> 
int	main(void)
{
	int	a = 20;
	int	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("a = %d and b = %d", a, b);
	return (0);
}
