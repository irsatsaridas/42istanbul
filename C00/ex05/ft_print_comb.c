/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:21:38 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/24 17:19:11 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i + j + k != 168)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{	
				ft_print_num(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
