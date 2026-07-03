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

void	ft_putstr_comb(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

void	cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_print_comb2(void)
{
	char	str[8];

	cpy(str, "00 01, ");
	while (str[0] <= '9')
	{
		while (str[1] < '8')
		{
			while (str[3] <= '9')
			{
				while (str[4] <= '9')
				{
					ft_putstr_comb(str);
					str[4]++;
				}
				str[4] = '0';
				str[3]++;
			}
			str[3] = str[0];
			str[1]++;
			str[4] = str[1] + 1;
		}
		str[0]++;
		str[1] = '0';
	}
	write (1, "98 99", 5);
}
