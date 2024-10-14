/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:20:34 by arosa-di          #+#    #+#             */
/*   Updated: 2024/08/25 19:29:51 by arosa-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{	
	int a = 4;
	int b = 2;

	char d;
	char e;

	d = a + '0';
	e = b + '0';	

	ft_swap(&a, &b);
	write(1, &d ,1);
	write(1, &e, 1);
}
*/
