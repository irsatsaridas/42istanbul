/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:38:08 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/26 00:05:39 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap( int *element1, int *element2)
{
	int	hold;

	hold = *element1;
	*element1 = *element2;
	*element2 = hold;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_i;
	int	count_o;

	count_i = 0;
	count_o = 0;
	while (count_o < size - 1)
	{
		while (count_i < size - 1)
		{
			if (tab[count_i] > tab[count_i + 1])
			{
				swap(&tab[count_i], &tab[count_i + 1]);
			}
			count_i++;
		}
		count_o++;
	}
}
