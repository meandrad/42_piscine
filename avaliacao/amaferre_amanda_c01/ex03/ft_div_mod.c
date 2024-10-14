/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:16:31 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/01 05:37:41 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h> 
int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 9;
	b = 3;

	ft_div_mod(a, b, &div, &mod);
	printf("a = %d and b = %d\n", a, b);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
	return 0;
}
