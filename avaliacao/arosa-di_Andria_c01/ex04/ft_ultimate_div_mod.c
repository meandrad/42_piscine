/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:42:56 by arosa-di          #+#    #+#             */
/*   Updated: 2024/08/27 19:51:53 by arosa-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
int	main (void)
{	
	int temp;	
	int a = 4;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("Resultado da divisão: %d" , a);
	printf("Resultado do resto: %d", b);
	printf("Temp: %d", temp);
}*/
