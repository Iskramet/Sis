/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:48:23 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 23:02:00 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		printable(char l)
{
	if (l >= 32 && l <= 126)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
