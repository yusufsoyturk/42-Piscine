/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoyturk <ysoyturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 00:16:18 by ysoyturk          #+#    #+#             */
/*   Updated: 2024/07/15 14:26:54 by ysoyturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if (a == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			a = 0;
		}
		else if (a == 1 && ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
			a = 0;
		else if (a == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (!(str[i] >= 'A' && str[i] <= 'Z') &&!(str[i] >= 'a'
				&& str[i] <= 'z') && !(str[i] >= '0' && str[i] <= '9'))
			a = 1;
		else
			a = 0;
		i++;
	}
	return (str);
}
