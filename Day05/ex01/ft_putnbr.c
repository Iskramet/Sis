/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeladio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:39:07 by aeladio           #+#    #+#             */
/*   Updated: 2020/02/11 17:17:39 by aeladio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long long int num[2];

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	num[0] = 1;
	num[1] = nb;
	while (num[1] != 0)
	{
		num[1] = num[1] / 10;
		num[0] = num[0] * 10;
	}
	while (num[0] != 1)
	{
		num[1] = nb;
		num[0] = num[0] / 10;
		num[1] = nb / num[0];
		nb = nb % num[0];
		ft_putchar(num[1] + '0');
	}
}
