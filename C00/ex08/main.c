/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:49:17 by isaridas          #+#    #+#             */
/*   Updated: 2022/07/24 22:06:04 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_nbs(int n, int *digit);
void ft_putchar(char c);
void ft_digit_inc(int n, int *digit);

void ft_print_combn(int n)
{
	int digit[10];
	int count;

	count = 0;
	while (count < n)
	{
		digit[count] = count;
		count++;
	}
	while (digit[0] != 10 - n || digit[n - 1] != 9)
	{
		ft_print_nbs(n, digit);  // en son sayıyı yazdırmayacak
		ft_digit_inc(n, digit);
		write(1, ", ", 2); // en son basamaktan sonra virgül yazdıracak
	}
}

void ft_print_nbs(int n, int *digit)
{
	int count;

	count = 0;
	while (count < n)
	{
		ft_putchar('0' + digit[count]);
		count++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_digit_inc(int n, int *digit)
{
	int element;
	int max;

	element = n - 1;
	max = 9;
	if (digit[n - 1] != 9)
	{
		digit[n - 1]++;
	}		
	else if (digit[n - 1] == 9)
	{
		while (digit[element] == max) // sondan başa doğru max olan elementlerden ilerleyerek hangi elementin artırılabileceğini bulur
		{
			max--;
			element++;
		}
		digit[element]++;
		while (element < n)
		{
			digit[element + 1] = digit[element] + 1; // aynı sayıyı iki defa yazmamak adına arttırılan elementten sonraki elementler öncekinin bir fazlası olacak şekilde başlar
			element++;
		}
	}
}

int main()
{
	ft_print_combn(5);
	return (0);
}
