/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:38:38 by meandrad          #+#    #+#             */
/*   Updated: 2024/08/21 09:40:56 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int main (void){
    
    int var1 = 10;
    int var2 = 15;

    printf("%d\n%d\n\n", var1, var2);

    ft_swap(&var1 ,&var2); 

    printf("%d\n%d", var1, var2);

}*/
