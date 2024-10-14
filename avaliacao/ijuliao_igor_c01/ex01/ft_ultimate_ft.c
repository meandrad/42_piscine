/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:28:39 by ijuliao-          #+#    #+#             */
/*   Updated: 2024/09/05 16:48:32 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	world = 0;
	int	*bbb =&world;
	int	**ccc =&bbb;
	int	***ddd =&ccc;
	int	****eee =&ddd;
	int	*****fff =&eee;
	int	******ggg =&fff;
	int	*******hhh =&ggg;
	int	********iii =&hhh;
	int	*********jjj =&iii;
	ft_ultimate_ft(jjj);
	printf("%d\n", world);

	return (0);
}
