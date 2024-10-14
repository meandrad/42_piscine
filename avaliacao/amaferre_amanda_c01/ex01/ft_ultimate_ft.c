/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:46:39 by amaferre          #+#    #+#             */
/*   Updated: 2024/09/01 05:35:09 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h> 
int main (void){

    int var = 10; 
    printf("%d\n", var);

    int *p1 = &var;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3; 
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    ft_ultimate_ft(&p8);

    printf("%d", var);

    return(0);
}
