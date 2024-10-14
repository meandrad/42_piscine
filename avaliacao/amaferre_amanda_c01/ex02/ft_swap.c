/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:18:08 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/01 05:36:24 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int main (void){
    
    int var1 = 10;
    int var2 = 15;

    printf("%d\n%d\n\n", var1, var2);

    ft_swap(&var1 ,&var2); 

    printf("%d\n%d", var1, var2);

}
