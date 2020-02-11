/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:41:36 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 15:12:07 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	result;
	int	minus;

	result = 0;
	minus = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		if (result == 0)
			result = *str - '0';
		else
			result = result * 10 + (*str - '0');
		++str;
	}
	return (result * minus);
}
