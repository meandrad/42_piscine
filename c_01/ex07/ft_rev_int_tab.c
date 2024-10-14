/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:19:49 by meandrad          #+#    #+#             */
/*   Updated: 2024/08/22 20:24:51 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	count2;
	int	temp;

	count = 0;
	count2 = size - 1;
	while (count < count2)
	{
		temp = tab[count];
		tab[count] = tab[count2];
		tab[count2] = temp;
		count++;
		count2 --;
	}
}

/*#include <stdio.h>
int main (void)
{
    int array[] = {1,0,2,3,4,7};
    ft_rev_int_tab(array, 6);
    return(0);

}*/
