/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:56:14 by arosa-di          #+#    #+#             */
/*   Updated: 2024/08/26 23:37:21 by arosa-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  #include <stdio.h> */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main (void)
{
	int a = 4;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Resultado: %d", div);
	printf("Resto: %d", mod);

}*/
