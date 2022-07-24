/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:21:49 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/23 19:26:09 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_fullnb(int d1, int d2, int d3, int d4)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d3, 1);
	write(1, &d4, 1)
}

void	ft_divide_fullnb(int nb1, int nb2)
{
	int	i1;
	int	j1;
	int	i2;
	int	j2;

	i1 = nb1 / 10 + '0';
	i2 = nb1 % 10 + '0';
	j1 = nb2 / 10 + '0';
	j2 = nb2 % 10 + '0';
	ft_print_fullnb(i1, i2, j1, j2);
}

void	ft_print_comb2(void)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	while (count1 <= 98)
	{	
		while (count2 <= 99)
		{
			ft_divide_fullnb(count1, count2);
			count2++;
			if ( count1 != 98 && count2 != 99)
				write(1, ", ", 2);
		}
		count1++;
		count2 = count1 + 1;
	}
}
