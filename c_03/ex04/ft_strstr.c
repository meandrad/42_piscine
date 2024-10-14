/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:34:52 by meandrad          #+#    #+#             */
/*   Updated: 2024/09/04 15:17:29 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main (void)
{
  char str[] = "Ola, bom dia! Tudo bem?";
  char to_find[] = "Tudo";
  
  char *result = ft_strstr(str, to_find);
  if(*result)
    printf("O resultado encontrado foi: %s\n", result);
  return(0);
}*/
