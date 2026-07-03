/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/12/21 12:05:27 by angavrel          #+#    #+#             */
/*   Updated: 2026/12/21 12:42:46 by angavrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_rev(char *number, int i)
{
	while (i >= 0)
	{
		write (1, &number[i], 1);
		i--;
	}
}

void	ft_print_n(long n)
{
	int		i;
	char	number[11];

	number[0] = '\0';
	i = 0;
	while (n > 0)
	{
		number[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	number[i] = '\0';
	ft_putstr_rev(number, i);
}

void	ft_putnbr(int nb)
{
	long		n;

	n = nb;
	if (n == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	ft_print_n(n);
}
