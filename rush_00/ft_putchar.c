/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:27:21 by meandrad          #+#    #+#             */
/*   Updated: 2024/08/17 17:37:40 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int j, char edge, char center, int col)
{
	if (j == 0 || j == col - 1)
		write(1, &edge, 1);
	else
		write(1, &center, 1);
}
