/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:21:49 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/21 19:51:41 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb2(void)
{	
	int count1 = 0;
	int count2 = 0;
	int first_digit_i = 0;
	int first_digit_j = 0;
	int second_digit_i = 0;
	int second_digit_j = 0;
	
	while(count1 <= 98)
	{	
		while(count2 <= 99)
		{
			first_digit_i = i / 10 + 48;
			second_digit_i = i % 10 + 48;
			first_digit_j = j / 10 + 48;
			second_digit_j = j % 10 + 48;
			write(1,&first_digit_i,1);
			write(1,&second_digit_i,1);
			write(1," ",1);
			write(1,&first_digit_j,1);
			write(1,&second_digit_j,1);
			write(1,", ",2);
			count2++;
		}
		count1++;
		count2 = count1 + 1;
	}
}
