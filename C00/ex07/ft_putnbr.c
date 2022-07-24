/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:27:00 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/24 14:18:21 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	digit[10];
	int	count;

	count = -1;
	while (nb != 0)
	{
		count++;
		digit[count] = (nb % 10) + 48;
		nb = nb / 10;
	}
	while (count >= 0)
	{
		write(1, &digit[count], 1);
		count--;
	}
	write(1, "\n", 1);
}
