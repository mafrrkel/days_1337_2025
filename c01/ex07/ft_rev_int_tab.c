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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size - 1;
	swap = 0;
	while (i <= (j - i))
	{
		swap = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = swap;
		i++;
	}
}
