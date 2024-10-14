/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:41:15 by meandrad          #+#    #+#             */
/*   Updated: 2024/08/21 09:43:11 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h> 

int main (void){ 

    int a, b, div, mod; 

    a = 13; 
    b = 2;

    ft_div_mod(a, b, &div, &mod);
    
    printf("%d\n%d\n", div, mod);

    return(0);
}*/
