/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:44:35 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 22:46:32 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		uppercase(char l)
{
	if (l >= 'A' && l <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(uppercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
