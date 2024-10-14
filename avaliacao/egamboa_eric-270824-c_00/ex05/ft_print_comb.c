/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egamboa- <egamboa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:18:33 by egamboa-          #+#    #+#             */
/*   Updated: 2024/08/27 19:14:40 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_vs(void)
{
	write(1, &",", 1);
	write(1, &" ", 1);
}

void	ft_print_dig(char cen, char dez, char uni)
{	
	write(1, &cen, 1);
	write(1, &dez, 1);
	write(1, &uni, 1);
}

void	ft_print_comb(void)
{
	char	cen;
	char	dez;
	char	uni;

	cen = '0';
	while (cen <= '7')
	{
		dez = cen + 1;
		while (dez <= '8')
		{
			uni = dez + 1;
			while (uni <= '9')
			{	
				ft_print_dig(cen, dez, uni);
				if (!(cen == '7' && dez == '8' && uni == '9'))
					ft_write_vs();
				uni++;
			}
		dez++;
		}
	cen++;
	}
}

int	main(void)
{
 	ft_print_comb();
 	return (0);
}
