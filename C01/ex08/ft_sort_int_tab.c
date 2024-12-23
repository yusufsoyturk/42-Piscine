/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoyturk <ysoyturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:00:42 by ysoyturk          #+#    #+#             */
/*   Updated: 2024/07/11 11:12:23 by ysoyturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	while (size >= 0)
	{
		a = 0;
		while (a < size -1)
		{
			if (tab[a] > tab[a + 1])
			{
				swap = tab[a];
				tab[a] = tab[a + 1];
				tab[a +1] = swap;
			}
			a++;
		}
		size--;
	}
}
