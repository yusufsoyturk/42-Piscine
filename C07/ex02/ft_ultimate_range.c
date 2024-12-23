/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoyturk <ysoyturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:59:31 by ysoyturk          #+#    #+#             */
/*   Updated: 2024/07/23 13:44:05 by ysoyturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	i;

	a = max - min;
	if (a <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * a);
	if (*range == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < a)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (a);
}
