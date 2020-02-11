/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:44:25 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 22:10:22 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		letter(char l)
{
	if ((l >= 'a') && (l <= 'z'))
		return (1);
	if (l == '+' || l == '-')
		return (2);
	if (l == '\n' || l == '\t' || l == '\v' || l == '\f' || l == '\r')
		return (2);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (letter(str[0]) == 1)
		str[i] -= 32;
	while (str[i])
	{
		if (((letter(str[i]) == 1) && (str[i - 1] == ' '))
				|| letter(str[i - 1]) == 2)
			str[i] -= 32;
		i++;
	}
	return (str);
}
