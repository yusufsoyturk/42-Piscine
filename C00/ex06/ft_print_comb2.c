/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoyturk <ysoyturk@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:21:15 by ysoyturk          #+#    #+#             */
/*   Updated: 2024/07/08 19:57:49 by ysoyturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_digit(int n)
{
	n += 48;
	write (1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_digit (a / 10);
			ft_digit (a % 10);
			write (1, " ", 1);
			ft_digit (b / 10);
			ft_digit (b % 10);
			if (a != 98 || b != 99)
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
