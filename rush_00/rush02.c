/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:39:18 by meandrad          #+#    #+#             */
/*   Updated: 2024/08/17 18:08:59 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int j, char edge, char center, int col);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (i == 0)
				ft_putchar(j, 'A', 'B', y);
			else if (i == x - 1)
				ft_putchar(j, 'C', 'B', y);
			else
				ft_putchar(j, 'B', ' ', y);
			j++;
		}
		ft_putchar(j, '\n', '\n', y);
		i++;
	}
}
