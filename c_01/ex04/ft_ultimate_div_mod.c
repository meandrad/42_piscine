/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:50:11 by meandrad          #+#    #+#             */
/*   Updated: 2024/08/22 20:10:51 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;	

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*#include <stdio.h>
int main (void){ 

	int a = 20;
	int b = 10;

	printf("%d\n%d\n", a, b);
    ft_putsrt(&a, &b);
	printf("%d\n%d\n", a, b);

    return 0;
}*/
