/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:24:05 by arosa-di          #+#    #+#             */
/*   Updated: 2024/08/31 20:10:32 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr;
}


#include <stdio.h>
int	main(void)
{
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

	ft_ultimate_ft (&p8);
	write(1, &var ,1);

}
