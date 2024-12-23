/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoyturk <ysoyturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:56:22 by ysoyturk          #+#    #+#             */
/*   Updated: 2024/07/15 14:32:21 by ysoyturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[a] != '\0' && a < size - 1)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (ft_strlen(src));
}
