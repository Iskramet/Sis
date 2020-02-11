/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:37:22 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 22:41:55 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lowercase(char l)
{
	if (l >= 'a' && l <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
